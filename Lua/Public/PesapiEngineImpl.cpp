#include "pesapi.h"

int32_t pesapi_stats_begin_sample(int16_t sampleId, int32_t customNameId)
{
    return 0;
}

pesapi_func_ptr engine_apis[] = {(pesapi_func_ptr)&pesapi_stats_begin_sample};