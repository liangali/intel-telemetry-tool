
#include "cpu_device.h"

cpu_device::cpu_device(/* args */)
{
}

cpu_device::~cpu_device()
{
}

cpuinfo* cpu_device::get_cpu_info()
{
    info.model_name = "Intel(R) Core(TM) i5-7600K CPU @ 4.10GHz";
    info.core_count_py = 4;
    info.core_count_lo = 8;
    info.freq_min = 0.9;
    info.freq_max = 4.1;

    return &info;
}