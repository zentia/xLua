// Copyright (c) 2005, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// ---
// Author: Craig Silverstein
//
// A dense hashtable is a particular implementation of
// a hashtable: one that is meant to minimize memory allocation.
// It does this by using an array to store all the data.  We
// steal a value from the key space to indicate "empty" array
// elements (ie indices where no item lives) and another to indicate
// "deleted" elements.
//
// (Note it is possible to change the value of the delete key
// on the fly; you can even remove it, though after that point
// the hashtable is insert_only until you set it again.  The empty
// value however can't be changed.)
//
// To minimize allocation and pointer overhead, we use internal
// probing, in which the hashtable is a single table, and collisions
// are resolved by trying to insert again in another bucket.  The
// most cache-efficient internal probing schemes are linear probing
// (which suffers, alas, from clumping) and quadratic probing, which
// is what we implement by default.
//
// Type requirements: value_type is required to be Copy Constructible
// and Default Constructible. It is not required to be (and commonly
// isn't) Assignable.
//
// You probably shouldn't use this code directly.  Use
// <google/dense_hash_map> or <google/dense_hash_set> instead.

// You can change the following below:
// HT_OCCUPANCY_FLT      -- how full before we double size
// HT_EMPTY_FLT          -- how empty before we halve size
// HT_MIN_BUCKETS        -- default smallest bucket size
//
// How to decide what values to use?
// HT_EMPTY_FLT's default of .4 * OCCUPANCY_FLT, is probably good.
// HT_MIN_BUCKETS is probably unnecessary since you can specify
// (indirectly) the starting number of buckets at construct-time.
// For HT_OCCUPANCY_FLT, you can use this chart to try to trade-off
// expected lookup time to the space taken up.  By default, this
// code uses quadratic probing, though you can change it to linear
// via _JUMP below if you really want to.
//
// From http://www.augustana.ca/~mohrj/courses/1999.fall/csc210/lecture_notes/hashing.html
// NUMBER OF PROBES / LOOKUP       Successful            Unsuccessful
// Quadratic collision resolution   1 - ln(1-L) - L/2    1/(1-L) - L - ln(1-L)
// Linear collision resolution     [1+1/(1-L)]/2         [1+1/(1-L)2]/2
//
// -- HT_OCCUPANCY_FLT --         0.10  0.50  0.60  0.75  0.80  0.90  0.99
// QUADRATIC COLLISION RES.
//    probes/successful lookup    1.05  1.44  1.62  2.01  2.21  2.85  5.11
//    probes/unsuccessful lookup  1.11  2.19  2.82  4.64  5.81  11.4  103.6
// LINEAR COLLISION RES.
//    probes/successful lookup    1.06  1.5   1.75  2.5   3.0   5.5   50.5
//    probes/unsuccessful lookup  1.12  2.5   3.6   8.5   13.0  50.0  5000.0

#ifndef _DENSEHASHTABLE_H_
#define _DENSEHASHTABLE_H_

// The probing method
// Linear probing
// #define JUMP_(key, num_probes)    ( 1 )
// Quadratic-ish probing
#define JUMP_(key, num_probes)    ( num_probes )
#define DenseTableAssert lua_assert

// Hashtable class, used to implement the hashed associative containers
// hash_set and hash_map.

//#include <google/sparsehash/sparseconfig.h>
//#include <Assert.h>
// Use Unity's assertion pathways
//#include <stdlib.h>             // for abort()
//#include <algorithm>            // For swap(), eg
//#include <iostream>             // For cerr
#include <memory>               // For uninitialized_fill, uninitialized_copy
//#include <utility>              // for pair<>
//#include <iterator>             // for facts about iterator tags
#include "type_traits.h" // for true_type, integral_constant, etc.

using std::pair;

template <class Value, class Key, class HashFcn,
          class ExtractKey, class EqualKey, class Alloc>
class dense_hashtable;

template <class V, class K, class HF, class ExK, class EqK, class A>
struct dense_hashtable_iterator;

template <class V, class K, class HF, class ExK, class EqK, class A>
struct dense_hashtable_const_iterator;

// We're just an array, but we need to skip over empty and deleted elements
template <class V, class K, class HF, class ExK, class EqK, class A>
struct dense_hashtable_iterator {
 public:
  typedef dense_hashtable_iterator<V,K,HF,ExK,EqK,A>       iterator;
  typedef dense_hashtable_const_iterator<V,K,HF,ExK,EqK,A> const_iterator;

  typedef std::forward_iterator_tag iterator_category;
  typedef V value_type;
  typedef std::ptrdiff_t difference_type;
  typedef size_t size_type;
  typedef V& reference;                // Value
  typedef V* pointer;

  // "Real" constructor and default constructor
  dense_hashtable_iterator(const dense_hashtable<V,K,HF,ExK,EqK,A> *h,
                           pointer it, pointer it_end, bool advance)
    : ht(h), pos(it), end(it_end)   {
    if (advance)  advance_past_empty_and_deleted();
  }
  dense_hashtable_iterator() { }
  // The default destructor is fine; we don't define one
  // The default operator= is fine; we don't define one

  // Happy dereferencer
  reference operator*() const { return *pos; }
  pointer operator->() const { return &(operator*()); }

  // Arithmetic.  The only hard part is making sure that
  // we're not on an empty or marked-deleted array element
  void advance_past_empty_and_deleted() {
    while ( pos != end && (ht->test_empty(*this) || ht->test_deleted(*this)) )
      ++pos;
  }
  iterator& operator++()   {
    DenseTableAssert(pos != end); ++pos; advance_past_empty_and_deleted(); return *this;
  }
  iterator operator++(int) { iterator tmp(*this); ++*this; return tmp; }

  // Comparison.
  bool operator==(const iterator& it) const { return pos == it.pos; }
  bool operator!=(const iterator& it) const { return pos != it.pos; }


  // The actual data
  const dense_hashtable<V,K,HF,ExK,EqK,A> *ht;
  pointer pos, end;
};


// Now do it all again, but with const-ness!
template <class V, class K, class HF, class ExK, class EqK, class A>
struct dense_hashtable_const_iterator {
 public:
  typedef dense_hashtable_iterator<V,K,HF,ExK,EqK,A>       iterator;
  typedef dense_hashtable_const_iterator<V,K,HF,ExK,EqK,A> const_iterator;

  typedef std::forward_iterator_tag iterator_category;
  typedef V value_type;
  typedef std::ptrdiff_t difference_type;
  typedef size_t size_type;
  typedef const V& reference;                // Value
  typedef const V* pointer;

  // "Real" constructor and default constructor
  dense_hashtable_const_iterator(const dense_hashtable<V,K,HF,ExK,EqK,A> *h,
                                 pointer it, pointer it_end, bool advance)
    : ht(h), pos(it), end(it_end)   {
    if (advance)  advance_past_empty_and_deleted();
  }
  dense_hashtable_const_iterator() { }
  // This lets us convert regular iterators to const iterators
  dense_hashtable_const_iterator(const iterator &it)
    : ht(it.ht), pos(it.pos), end(it.end) { }
  // The default destructor is fine; we don't define one
  // The default operator= is fine; we don't define one

  // Happy dereferencer
  reference operator*() const { return *pos; }
  pointer operator->() const { return &(operator*()); }

  // Arithmetic.  The only hard part is making sure that
  // we're not on an empty or marked-deleted array element
  void advance_past_empty_and_deleted() {
    while ( pos != end && (ht->test_empty(*this) || ht->test_deleted(*this)) )
      ++pos;
  }
  const_iterator& operator++()   {
    DenseTableAssert(pos != end); ++pos; advance_past_empty_and_deleted(); return *this;
  }
  const_iterator operator++(int) { const_iterator tmp(*this); ++*this; return tmp; }

  // Comparison.
  bool operator==(const const_iterator& it) const { return pos == it.pos; }
  bool operator!=(const const_iterator& it) const { return pos != it.pos; }


  // The actual data
  const dense_hashtable<V,K,HF,ExK,EqK,A> *ht;
  pointer pos, end;
};

template <class Value, class Key, class HashFcn,
          class ExtractKey, class EqualKey, class Alloc>
class dense_hashtable {
 public:
  typedef Key key_type;
  typedef Value value_type;
  typedef HashFcn hasher;
  typedef EqualKey key_equal;

  typedef size_t            size_type;
  typedef std::ptrdiff_t         difference_type;
  typedef value_type*       pointer;
  typedef const value_type* const_pointer;
  typedef value_type&       reference;
  typedef const value_type& const_reference;
  typedef dense_hashtable_iterator<Value, Key, HashFcn,
                                   ExtractKey, EqualKey, Alloc>
  iterator;

  typedef dense_hashtable_const_iterator<Value, Key, HashFcn,
                                          ExtractKey, EqualKey, Alloc>
  const_iterator;

  // How full we let the table get before we resize.  Knuth says .8 is
  // good -- higher causes us to probe too much, though saves memory
  static const float HT_OCCUPANCY_FLT; // = 0.8;

  // How empty we let the table get before we resize lower.
  // (0.0 means never resize lower.)
  // It should be less than OCCUPANCY_FLT / 2 or we thrash resizing
  static const float HT_EMPTY_FLT; // = 0.4 * HT_OCCUPANCY_FLT

  // Minimum size we're willing to let hashtables be.
  // Must be a power of two, and at least 4.
  // Note, however, that for a given hashtable, the initial size is a
  // function of the first constructor arg, and may be >HT_MIN_BUCKETS.
  static const size_t HT_MIN_BUCKETS  = 32;


  // ITERATOR FUNCTIONS
  iterator begin()             { return iterator(this, table,
                                                 table + num_buckets, true); }
  iterator end()               { return iterator(this, table + num_buckets,
                                                 table + num_buckets, true); }
  const_iterator begin() const { return const_iterator(this, table,
                                                       table+num_buckets,true);}
  const_iterator end() const   { return const_iterator(this, table + num_buckets,
                                                       table+num_buckets,true);}

  // ACCESSOR FUNCTIONS for the things we templatize on, basically
  hasher hash_funct() const { return hash; }
  key_equal key_eq() const  { return equals; }

  // Annoyingly, we can't copy values around, because they might have
  // const components (they're probably pair<const X, Y>).  We use
  // explicit destructor invocation and placement new to get around
  // this.  Arg.
 private:
  void set_value(value_type* dst, const value_type& src) {
    dst->~value_type();
    new(dst) value_type(src);
  }

  void destroy_buckets(size_type first, size_type last) {
    for ( ; first != last; ++first)
      table[first].~value_type();
  }

  // DELETE HELPER FUNCTIONS
  // This lets the user describe a key that will indicate deleted
  // table entries.  This key should be an "impossible" entry --
  // if you try to insert it for real, you won't be able to retrieve it!
  // (NB: while you pass in an entire value, only the key part is looked
  // at.  This is just because I don't know how to assign just a key.)
 private:
  void squash_deleted() {           // gets rid of any deleted entries we have
    if ( num_deleted ) {            // get rid of deleted before writing
      dense_hashtable tmp(*this);   // copying will get rid of deleted
      swap(tmp);                    // now we are tmp
    }
    DenseTableAssert(num_deleted == 0);
  }

 public:
  void set_deleted_key(const value_type &val) {
    // the empty indicator (if specified) and the deleted indicator
    // must be different
    DenseTableAssert(!use_empty || !equals(get_key(val), get_key(emptyval)));
    // It's only safe to change what "deleted" means if we purge deleted guys
    squash_deleted();
    use_deleted = true;
    set_value(&delval, val);
  }
  void clear_deleted_key() {
    squash_deleted();
    use_deleted = false;
  }

  // These are public so the iterators can use them
  // True if the item at position bucknum is "deleted" marker
  bool test_deleted(size_type bucknum) const {
    // The num_deleted test is crucial for read(): after read(), the ht values
    // are garbage, and we don't want to think some of them are deleted.
    return (use_deleted && num_deleted > 0 &&
            equals(get_key(delval), get_key(table[bucknum])));
  }
  bool test_deleted(const iterator &it) const {
    return (use_deleted && num_deleted > 0 &&
            equals(get_key(delval), get_key(*it)));
  }
  bool test_deleted(const const_iterator &it) const {
    return (use_deleted && num_deleted > 0 &&
            equals(get_key(delval), get_key(*it)));
  }
  // Set it so test_deleted is true.  true if object didn't used to be deleted
  // See below (at erase()) to explain why we allow const_iterators
  bool set_deleted(const_iterator &it) {
    DenseTableAssert(use_deleted);             // bad if set_deleted_key() wasn't called
    bool retval = !test_deleted(it);
    // &* converts from iterator to value-type
    set_value(const_cast<value_type*>(&(*it)), delval);
    return retval;
  }
  // Set it so test_deleted is false.  true if object used to be deleted
  bool clear_deleted(const_iterator &it) {
    DenseTableAssert(use_deleted);             // bad if set_deleted_key() wasn't called
    // happens automatically when we assign something else in its place
    return test_deleted(it);
  }

  // EMPTY HELPER FUNCTIONS
  // This lets the user describe a key that will indicate empty (unused)
  // table entries.  This key should be an "impossible" entry --
  // if you try to insert it for real, you won't be able to retrieve it!
  // (NB: while you pass in an entire value, only the key part is looked
  // at.  This is just because I don't know how to assign just a key.)
 public:
  // These are public so the iterators can use them
  // True if the item at position bucknum is "empty" marker
  bool test_empty(size_type bucknum) const {
    DenseTableAssert(use_empty);              // we always need to know what's empty!
    return equals(get_key(emptyval), get_key(table[bucknum]));
  }
  bool test_empty(const iterator &it) const {
    DenseTableAssert(use_empty);              // we always need to know what's empty!
    return equals(get_key(emptyval), get_key(*it));
  }
  bool test_empty(const const_iterator &it) const {
    DenseTableAssert(use_empty);              // we always need to know what's empty!
    return equals(get_key(emptyval), get_key(*it));
  }

 private:
  // You can either set a range empty or an individual element
  void set_empty(size_type bucknum) {
    DenseTableAssert(use_empty);
    set_value(&table[bucknum], emptyval);
  }
  void fill_range_with_empty(value_type* table_start, value_type* table_end) {
    // Like set_empty(range), but doesn't destroy previous contents
    std::uninitialized_fill(table_start, table_end, emptyval);
  }
  void set_empty(size_type buckstart, size_type buckend) {
    DenseTableAssert(use_empty);
    destroy_buckets(buckstart, buckend);
    fill_range_with_empty(table + buckstart, table + buckend);
  }

 public:
  // TODO(csilvers): change all callers of this to pass in a key instead,
  //                 and take a const key_type instead of const value_type.
  void set_empty_key(const value_type &val) {
    // Once you set the empty key, you can't change it
      lua_assert(!use_empty);
    // The deleted indicator (if specified) and the empty indicator
    // must be different.
    lua_assert(!use_deleted || !equals(get_key(val), get_key(delval)));
    use_empty = true;
    set_value(&emptyval, val);

    lua_assert(!table);    // must set before first use
    // num_buckets was set in constructor even though table was NULL
	table = _Alval.allocate(num_buckets);
    lua_assert(table);
    fill_range_with_empty(table, table + num_buckets);
  }

  // FUNCTIONS CONCERNING SIZE
 public:
  size_type size() const      { return num_elements - num_deleted; }
  // Buckets are always a power of 2
  size_type max_size() const  { return (size_type(-1) >> 1U) + 1; }
  bool empty() const          { return size() == 0; }
  size_type bucket_count() const      { return num_buckets; }
  size_type max_bucket_count() const  { return max_size(); }
  size_type nonempty_bucket_count() const { return num_elements; }

 private:
  // Because of the above, size_type(-1) is never legal; use it for errors
  static const size_type ILLEGAL_BUCKET = size_type(-1);

 private:
  // This is the smallest size a hashtable can be without being too crowded
  // If you like, you can give a min #buckets as well as a min #elts
  size_type min_size(size_type num_elts, size_type min_buckets_wanted) const {
    size_type sz = HT_MIN_BUCKETS;             // min buckets allowed
    while ( sz < min_buckets_wanted || num_elts >= sz * HT_OCCUPANCY_FLT )
      sz *= 2;
    return sz;
  }

  // Used after a string of deletes
  // Returns true if actually resized.
  bool maybe_shrink() {
	bool did_resize = false;
      lua_assert(num_elements >= num_deleted);
    lua_assert((bucket_count() & (bucket_count()-1)) == 0); // is a power of two
      lua_assert(bucket_count() >= HT_MIN_BUCKETS);

    if ( (num_elements-num_deleted) < shrink_threshold &&
         bucket_count() > HT_MIN_BUCKETS ) {
      size_type sz = bucket_count() / 2;    // find how much we should shrink
      while ( sz > HT_MIN_BUCKETS &&
              (num_elements - num_deleted) < sz * HT_EMPTY_FLT )
        sz /= 2;                            // stay a power of 2
      dense_hashtable tmp(*this, sz);       // Do the actual resizing
      swap(tmp);                            // now we are tmp
	  did_resize = true;
    }
    consider_shrink = false;                // because we just considered it
	return did_resize;
  }

  // We'll let you resize a hashtable -- though this makes us copy all!
  // When you resize, you say, "make it big enough for this many more elements"
  // Returns true if actually resized.
  bool resize_delta(size_type delta, size_type min_buckets_wanted = 0) {
	bool did_resize = false;
    if ( consider_shrink )                   // see if lots of deletes happened
      did_resize = maybe_shrink();
    if ( bucket_count() > min_buckets_wanted &&
         (num_elements + delta) <= enlarge_threshold )
      return did_resize;                     // we're ok as we are

    // Sometimes, we need to resize just to get rid of all the
    // "deleted" buckets that are clogging up the hashtable.  So when
    // deciding whether to resize, count the deleted buckets (which
    // are currently taking up room).  But later, when we decide what
    // size to resize to, *don't* count deleted buckets, since they
    // get discarded during the resize.
    const size_type needed_size = min_size(num_elements + delta,
                                           min_buckets_wanted);
    if ( needed_size > bucket_count() ) {      // we don't have enough buckets
      const size_type resize_to = min_size(num_elements - num_deleted + delta,
                                           min_buckets_wanted);
      dense_hashtable tmp(*this, resize_to);
      swap(tmp);                             // now we are tmp
	  did_resize = true;
    }
	return did_resize;
  }

  // Increase number of buckets, assuming value_type has trivial copy
  // constructor and destructor.  (Really, we want it to have "trivial
  // move", because that's what realloc does.  But there's no way to
  // capture that using type_traits, so we pretend that move(x, y) is
  // equivalent to "x.~T(); new(x) T(y);" which is pretty much
  // correct, if a bit conservative.)
	void expand_array(size_t resize_to, dense_hash_map_traits::true_type) {
		value_type* new_table = _Alval.allocate(resize_to);
		DenseTableAssert(new_table);
		if(table)
		{
			std::uninitialized_copy(table, table + num_buckets, new_table);
			_Alval.deallocate(table, num_buckets);
		}
		fill_range_with_empty(new_table + num_buckets, new_table + resize_to);
		table = new_table;
		DenseTableAssert(table);
  }

  // Increase number of buckets, without special assumptions about value_type.
  // TODO(austern): make this exception safe. Handle exceptions from
  // value_type's copy constructor.
  void expand_array(size_t resize_to, dense_hash_map_traits::false_type) {
    value_type* new_table = _Alval.allocate(resize_to);
    DenseTableAssert(new_table);
    std::uninitialized_copy(table, table + std::min(num_buckets,resize_to), new_table);
    fill_range_with_empty(new_table + num_buckets, new_table + resize_to);
    destroy_buckets(0, num_buckets);
    _Alval.deallocate(table, num_buckets);
    table = new_table;
  }

  // Used to actually do the rehashing when we grow/shrink a hashtable
  void copy_from(const dense_hashtable &ht, size_type min_buckets_wanted = 0) {
    clear();            // clear table, set num_deleted to 0

    // If we need to change the size of our table, do it now
    const size_type resize_to = min_size(ht.size(), min_buckets_wanted);
    if ( resize_to > bucket_count() ) { // we don't have enough buckets
      typedef dense_hash_map_traits::integral_constant<bool,
          (dense_hash_map_traits::has_trivial_copy<value_type>::value &&
           dense_hash_map_traits::has_trivial_destructor<value_type>::value)>
          realloc_ok; // we pretend mv(x,y) == "x.~T(); new(x) T(y)"
      expand_array(resize_to, realloc_ok());
      num_buckets = resize_to;
      reset_thresholds();
    }

    // We use a normal iterator to get non-deleted bcks from ht
    // We could use insert() here, but since we know there are
    // no duplicates and no deleted items, we can be more efficient
    DenseTableAssert((bucket_count() & (bucket_count()-1)) == 0);      // a power of two
    for ( const_iterator it = ht.begin(); it != ht.end(); ++it ) {
      size_type num_probes = 0;              // how many times we've probed
      size_type bucknum;
      const size_type bucket_count_minus_one = bucket_count() - 1;
      for (bucknum = hash(get_key(*it)) & bucket_count_minus_one;
           !test_empty(bucknum);                               // not empty
           bucknum = (bucknum + JUMP_(key, num_probes)) & bucket_count_minus_one) {
        ++num_probes;
        DenseTableAssert(num_probes < bucket_count()); // or else the hashtable is full
      }
      set_value(&table[bucknum], *it);       // copies the value to here
      num_elements++;
    }
  }

  // Required by the spec for hashed associative container
 public:
  // Though the docs say this should be num_buckets, I think it's much
  // more useful as req_elements.  As a special feature, calling with
  // req_elements==0 will cause us to shrink if we can, saving space.
  void resize(size_type req_elements) {       // resize to this or larger
    if ( consider_shrink || req_elements == 0 )
      maybe_shrink();
    if ( req_elements > num_elements )
      resize_delta(req_elements - num_elements, 0);
  }


  // CONSTRUCTORS -- as required by the specs, we take a size,
  // but also let you specify a hashfunction, key comparator,
  // and key extractor.  We also define a copy constructor and =.
  // DESTRUCTOR -- needs to free the table
  explicit dense_hashtable(size_type n = 0,
                           const HashFcn& hf = HashFcn(),
                           const EqualKey& eql = EqualKey(),
                           const ExtractKey& ext = ExtractKey())
    : hash(hf), equals(eql), get_key(ext), num_deleted(0),
      use_deleted(false), use_empty(false),
      delval(), emptyval(),
      table(NULL), num_buckets(min_size(0, n)), num_elements(0) {
    // table is NULL until emptyval is set.  However, we set num_buckets
    // here so we know how much space to allocate once emptyval is set
    reset_thresholds();
  }

  // As a convenience for resize(), we allow an optional second argument
  // which lets you make this new hashtable a different size than ht
  dense_hashtable(const dense_hashtable& ht, size_type min_buckets_wanted)
    : hash(ht.hash), equals(ht.equals), get_key(ht.get_key), num_deleted(0),
      use_deleted(ht.use_deleted), use_empty(ht.use_empty),
      delval(ht.delval), emptyval(ht.emptyval),
      table(NULL), num_buckets(0),
      num_elements(0) {
    reset_thresholds();
    copy_from(ht, min_buckets_wanted);   // copy_from() ignores deleted entries
  }

  dense_hashtable(const dense_hashtable& ht) : dense_hashtable(ht, 0) {}

  dense_hashtable& operator= (const dense_hashtable& ht) {
    if (&ht == this)  return *this;        // don't copy onto ourselves
    clear();
    hash = ht.hash;
    equals = ht.equals;
    get_key = ht.get_key;
    use_deleted = ht.use_deleted;
    use_empty = ht.use_empty;
    set_value(&delval, ht.delval);
    set_value(&emptyval, ht.emptyval);
    copy_from(ht);                         // sets num_deleted to 0 too
    return *this;
  }

  ~dense_hashtable() {
    if (table) {
      destroy_buckets(0, num_buckets);
      _Alval.deallocate(table, num_buckets);
    }
  }

  // Many STL algorithms use swap instead of copy constructors
  void swap(dense_hashtable& ht) {
    std::swap(hash, ht.hash);
    std::swap(equals, ht.equals);
    std::swap(get_key, ht.get_key);
    std::swap(num_deleted, ht.num_deleted);
    std::swap(use_deleted, ht.use_deleted);
    std::swap(use_empty, ht.use_empty);
    { value_type tmp;     // for annoying reasons, swap() doesn't work
      set_value(&tmp, delval);
      set_value(&delval, ht.delval);
      set_value(&ht.delval, tmp);
    }
    { value_type tmp;     // for annoying reasons, swap() doesn't work
      set_value(&tmp, emptyval);
      set_value(&emptyval, ht.emptyval);
      set_value(&ht.emptyval, tmp);
    }
    std::swap(table, ht.table);
    std::swap(num_buckets, ht.num_buckets);
    std::swap(num_elements, ht.num_elements);
    reset_thresholds();
    ht.reset_thresholds();
  }

  // It's always nice to be able to clear a table without deallocating it
  void clear() {
    if (table)
      destroy_buckets(0, num_buckets);

	size_type old_bucket_count = num_buckets;
	num_buckets = min_size(0,0);          // our new size
    reset_thresholds();
	value_type* new_table = _Alval.allocate(num_buckets);
	lua_assert(new_table);
	if(table)
		_Alval.deallocate(table, old_bucket_count);
	table = new_table;
    lua_assert(table);
	fill_range_with_empty(table, table + num_buckets);
	num_elements = 0;
	num_deleted = 0;
  }

  // Clear the table without resizing it.
  // Mimicks the stl_hashtable's behaviour when clear()-ing in that it
  // does not modify the bucket count
  void clear_no_resize() {
    if (table) {
      set_empty(0, num_buckets);
    }
    // don't consider to shrink before another erase()
    reset_thresholds();
    num_elements = 0;
    num_deleted = 0;
  }

  // LOOKUP ROUTINES
 private:
  // Returns a pair of positions: 1st where the object is, 2nd where
  // it would go if you wanted to insert it.  1st is ILLEGAL_BUCKET
  // if object is not found; 2nd is ILLEGAL_BUCKET if it is.
  // Note: because of deletions where-to-insert is not trivial: it's the
  // first deleted bucket we see, as long as we don't find the key later
  pair<size_type, size_type> find_position_with_hash(const key_type &key, size_type hash_) const {
    size_type num_probes = 0;              // how many times we've probed
    const size_type bucket_count_minus_one = bucket_count() - 1;
    size_type bucknum = hash_ & bucket_count_minus_one;
    size_type insert_pos = ILLEGAL_BUCKET; // where we would insert
    while ( 1 ) {                          // probe until something happens
      if ( test_empty(bucknum) ) {         // bucket is empty
        if ( insert_pos == ILLEGAL_BUCKET )   // found no prior place to insert
          return pair<size_type,size_type>(ILLEGAL_BUCKET, bucknum);
        else
          return pair<size_type,size_type>(ILLEGAL_BUCKET, insert_pos);

      } else if ( test_deleted(bucknum) ) {// keep searching, but mark to insert
        if ( insert_pos == ILLEGAL_BUCKET )
          insert_pos = bucknum;

      } else if ( equals(key, get_key(table[bucknum])) ) {
        return pair<size_type,size_type>(bucknum, ILLEGAL_BUCKET);
      }
      ++num_probes;                        // we're doing another probe
      bucknum = (bucknum + JUMP_(key, num_probes)) & bucket_count_minus_one;
      lua_assert(num_probes < bucket_count()); // don't probe too many times!
    }
  }

  pair<size_type, size_type> find_position(const key_type &key) const {
	  return find_position_with_hash(key, hash(key));
  }
 public:
  iterator find(const key_type& key) {
    if ( size() == 0 ) return end();
    pair<size_type, size_type> pos = find_position(key);
    if ( pos.first == ILLEGAL_BUCKET )     // alas, not there
      return end();
    else
      return iterator(this, table + pos.first, table + num_buckets, false);
  }

  const_iterator find(const key_type& key) const {
    if ( size() == 0 ) return end();
    pair<size_type, size_type> pos = find_position(key);
    if ( pos.first == ILLEGAL_BUCKET )     // alas, not there
      return end();
    else
      return const_iterator(this, table + pos.first, table+num_buckets, false);
  }

  // Counts how many elements have key key.  For maps, it's either 0 or 1.
  size_type count(const key_type &key) const {
    pair<size_type, size_type> pos = find_position(key);
    return pos.first == ILLEGAL_BUCKET ? 0 : 1;
  }

  // Likewise, equal_range doesn't really make sense for us.  Oh well.
  pair<iterator,iterator> equal_range(const key_type& key) {
    const iterator pos = find(key);      // either an iterator or end
    return pair<iterator,iterator>(pos, pos);
  }
  pair<const_iterator,const_iterator> equal_range(const key_type& key) const {
    const const_iterator pos = find(key);      // either an iterator or end
    return pair<iterator,iterator>(pos, pos);
  }


  // INSERTION ROUTINES
 private:
  // If you know *this is big enough to hold obj, use this routine
  pair<iterator, bool> insert_noresize(const value_type& obj) {
    const pair<size_type,size_type> pos = find_position(get_key(obj));
    if ( pos.first != ILLEGAL_BUCKET) {      // object was already there
      return pair<iterator,bool>(iterator(this, table + pos.first,
                                          table + num_buckets, false),
                                 false);          // false: we didn't insert
    } else {                                 // pos.second says where to put it
      if ( test_deleted(pos.second) ) {      // just replace if it's been del.
        const_iterator delpos(this, table + pos.second,              // shrug:
                              table + num_buckets, false);// shouldn't need const
        clear_deleted(delpos);
        lua_assert( num_deleted > 0);
        --num_deleted;                       // used to be, now it isn't
      } else {
        ++num_elements;                      // replacing an empty bucket
      }
      set_value(&table[pos.second], obj);
      return pair<iterator,bool>(iterator(this, table + pos.second,
                                          table + num_buckets, false),
                                 true);           // true: we did insert
    }
  }

 public:
  
  // Returns true in the first element of the pair if the insertion of <delta> elements would cause the table to be recreated,
  // either due to growing or shrinking. The second element of the pair indicates the new size, if resizing.
  pair<bool, size_type> would_resize(size_type delta = 1, size_type min_buckets_wanted = 0) const {
	if (consider_shrink && // Make sure the condition after this is identical to the one in maybe_resize()
		(num_elements - num_deleted) < shrink_threshold &&
		bucket_count() > HT_MIN_BUCKETS) {

		size_type sz = bucket_count() / 2;    // find how much we should shrink
		while (sz > HT_MIN_BUCKETS &&
			(num_elements - num_deleted) < sz * HT_EMPTY_FLT)
			sz /= 2;                            // stay a power of 2

		return pair<bool, size_type>(true, sz); // Would shrink
	}

	// Make sure this code is kept identical to the one in resize_delta()
	if (bucket_count() > min_buckets_wanted &&
		(num_elements + delta) <= enlarge_threshold)
		return pair<bool, size_type>(false, 0);	// we're ok as we are

												// Sometimes, we need to resize just to get rid of all the
												// "deleted" buckets that are clogging up the hashtable.  So when
												// deciding whether to resize, count the deleted buckets (which
												// are currently taking up room).  But later, when we decide what
												// size to resize to, *don't* count deleted buckets, since they
												// get discarded during the resize.
	const size_type needed_size = min_size(num_elements + delta,
		min_buckets_wanted);
	if (needed_size > bucket_count()) {
		const size_type resize_to = min_size(num_elements - num_deleted + delta,
			min_buckets_wanted);

		return pair<bool, size_type>(true, resize_to);
	}

	return pair<bool, size_type>(false, 0);
  }
 
  // This is the normal insert routine, used by the outside world
  pair<iterator, bool> insert(const value_type& obj) {
    resize_delta(1);                      // adding an object, grow if need be
    return insert_noresize(obj);
  }
  
  // Same as insert above, but doesn't overwrite if a value already exists.
  pair<iterator, bool> find_or_insert(const value_type& obj) {
	  const key_type &key = get_key(obj);
	  size_type hash_ = hash(key);
	  pair<size_type, size_type> pos = find_position_with_hash(key, hash_);
	  if (pos.first != ILLEGAL_BUCKET) {      // object was already there
		  return pair<iterator, bool>(iterator(this, table + pos.first,
			  table + num_buckets, false),
			  false);          // false: we didn't insert
	  }
	  else {
		  // If we resize here, need to search position again
		  if (resize_delta(1)) {
			  pos = find_position_with_hash(key, hash_);
		  }

		  // pos.second says where to put it
		  if (test_deleted(pos.second)) {      // just replace if it's been del.
			  const_iterator delpos(this, table + pos.second,              // shrug:
				  table + num_buckets, false);// shouldn't need const
			  clear_deleted(delpos);
			  DenseTableAssert(num_deleted > 0);
			  --num_deleted;                       // used to be, now it isn't
		  }
		  else {
			  ++num_elements;                      // replacing an empty bucket
		  }
		  // The value is left uninitialized here.
		  set_value(&table[pos.second], obj);
		  return pair<iterator, bool>(iterator(this, table + pos.second,
			  table + num_buckets, false),
			  true);           // true: we did insert
	  }
  }

  // Same as find_or_insert, but fails (returns pair(end(), false)) if it would have to resize the map.
  pair<iterator, bool> find_or_insert_noresize(const value_type& obj) {
	  const key_type &key = get_key(obj);
	  size_type hash_ = hash(key);
	  pair<size_type, size_type> pos = find_position_with_hash(key, hash_);
	  if (pos.first != ILLEGAL_BUCKET) {      // object was already there
		  return pair<iterator, bool>(iterator(this, table + pos.first,
			  table + num_buckets, false),
			  false);          // false: we didn't insert
	  }
	  else {
		  // If we would have to resize, fail.
		  if (would_resize(1).first) {
			  return pair<iterator, bool>(end(), false);
		  }

		  // pos.second says where to put it
		  if (test_deleted(pos.second)) {      // just replace if it's been del.
			  const_iterator delpos(this, table + pos.second,              // shrug:
				  table + num_buckets, false);// shouldn't need const
			  clear_deleted(delpos);
			  DenseTableAssert(num_deleted > 0);
			  --num_deleted;                       // used to be, now it isn't
		  }
		  else {
			  ++num_elements;                      // replacing an empty bucket
		  }
		  // The value is left uninitialized here.
		  set_value(&table[pos.second], obj);
		  return pair<iterator, bool>(iterator(this, table + pos.second,
			  table + num_buckets, false),
			  true);           // true: we did insert
	  }
  }


  // When inserting a lot at a time, we specialize on the type of iterator
  template <class InputIterator>
  void insert(InputIterator f, InputIterator l) {
    // specializes on iterator type
    insert(f, l, typename std::iterator_traits<InputIterator>::iterator_category());
  }

  // Iterator supports operator-, resize before inserting
  template <class ForwardIterator>
  void insert(ForwardIterator f, ForwardIterator l,
              std::forward_iterator_tag) {
    size_type n = std::distance(f, l);   // TODO(csilvers): standard?
    resize_delta(n);
    for ( ; n > 0; --n, ++f)
      insert_noresize(*f);
  }

  // Arbitrary iterator, can't tell how much to resize
  template <class InputIterator>
  void insert(InputIterator f, InputIterator l,
              std::input_iterator_tag) {
    for ( ; f != l; ++f)
      insert(*f);
  }


  // DELETION ROUTINES
  size_type erase(const key_type& key) {
    const_iterator pos = find(key);   // shrug: shouldn't need to be const
    if ( pos != end() ) {
      DenseTableAssert(!test_deleted(pos));  // or find() shouldn't have returned it
      set_deleted(pos);
      ++num_deleted;
      consider_shrink = true;      // will think about shrink after next insert
      return 1;                    // because we deleted one thing
    } else {
      return 0;                    // because we deleted nothing
    }
  }

  // This is really evil: really it should be iterator, not const_iterator.
  // But...the only reason keys are const is to allow lookup.
  // Since that's a moot issue for deleted keys, we allow const_iterators
  void erase(const_iterator pos) {
    if ( pos == end() ) return;    // sanity check
    if ( set_deleted(pos) ) {      // true if object has been newly deleted
      ++num_deleted;
      consider_shrink = true;      // will think about shrink after next insert
    }
  }

  void erase(const_iterator f, const_iterator l) {
    for ( ; f != l; ++f) {
      if ( set_deleted(f)  )       // should always be true
        ++num_deleted;
    }
    consider_shrink = true;        // will think about shrink after next insert
  }


  // COMPARISON
  bool operator==(const dense_hashtable& ht) const {
    if (size() != ht.size()) {
      return false;
    } else if (this == &ht) {
      return true;
    } else {
      // Iterate through the elements in "this" and see if the
      // corresponding element is in ht
      for ( const_iterator it = begin(); it != end(); ++it ) {
        const_iterator it2 = ht.find(get_key(*it));
        if ((it2 == ht.end()) || (*it != *it2)) {
          return false;
        }
      }
      return true;
    }
  }
  bool operator!=(const dense_hashtable& ht) const {
    return !(*this == ht);
  }


 private:
  // The actual data
  hasher hash;                      // required by hashed_associative_container
  key_equal equals;
  ExtractKey get_key;
  size_type num_deleted;        // how many occupied buckets are marked deleted
  bool use_deleted;                          // false until delval has been set
  bool use_empty;                          // you must do this before you start
  value_type delval;                         // which key marks deleted entries
  value_type emptyval;                        // which key marks unused entries
  value_type *table;
  size_type num_buckets;
  size_type num_elements;
  size_type shrink_threshold;                     // num_buckets * HT_EMPTY_FLT
  size_type enlarge_threshold;                // num_buckets * HT_OCCUPANCY_FLT
  bool consider_shrink;   // true if we should try to shrink before next insert

  Alloc _Alval;                              // allocator object for value_type

  void reset_thresholds() {
    enlarge_threshold = static_cast<size_type>(num_buckets*HT_OCCUPANCY_FLT);
    shrink_threshold = static_cast<size_type>(num_buckets*HT_EMPTY_FLT);
    consider_shrink = false;   // whatever caused us to reset already considered
  }
};

// We need a global swap as well
template <class V, class K, class HF, class ExK, class EqK, class A>
inline void swap(dense_hashtable<V,K,HF,ExK,EqK,A> &x,
                 dense_hashtable<V,K,HF,ExK,EqK,A> &y) {
  x.swap(y);
}

#undef JUMP_
#undef DenseTableAssert

template <class V, class K, class HF, class ExK, class EqK, class A>
const typename dense_hashtable<V,K,HF,ExK,EqK,A>::size_type
  dense_hashtable<V,K,HF,ExK,EqK,A>::ILLEGAL_BUCKET;

// How full we let the table get before we resize.  Knuth says .8 is
// good -- higher causes us to probe too much, though saves memory
template <class V, class K, class HF, class ExK, class EqK, class A>
const float dense_hashtable<V,K,HF,ExK,EqK,A>::HT_OCCUPANCY_FLT = 0.5f;

// How empty we let the table get before we resize lower.
// It should be less than OCCUPANCY_FLT / 2 or we thrash resizing
template <class Value, class Key, class HashFcn, class ExtractKey, class EqualKey, class Alloc>
const float dense_hashtable<Value,Key,HashFcn,ExtractKey,EqualKey,Alloc>::HT_EMPTY_FLT = 0.4f *
dense_hashtable<Value,Key,HashFcn,ExtractKey,EqualKey,Alloc>::HT_OCCUPANCY_FLT;

#endif /* _DENSEHASHTABLE_H_ */
