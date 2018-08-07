#pragma once

#include <string>
#include <stdint.h>

struct cpuinfo
{
    std::string model_name;
    int32_t core_count_py;
    int32_t core_count_lo;
    double freq_min;
    double freq_max;
};

int get_cpu_device_info(cpuinfo* info);
