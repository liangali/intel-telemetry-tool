#include "interface.h"
#include "cpu_device.h"

int get_cpu_device_info(cpuinfo* info)
{
    cpuinfo* i = NULL;
    cpu_device* cpu = new cpu_device;
    i = cpu->get_cpu_info();
    
    if (i == NULL)
        return -1;

    info->model_name = i->model_name;
    info->core_count_py = i->core_count_py;
    info->core_count_lo = i->core_count_lo;
    info->freq_min = i->freq_min;
    info->freq_max = i->freq_max;

    delete cpu;
    return 0;
}