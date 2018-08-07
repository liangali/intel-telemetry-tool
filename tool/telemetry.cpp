#include<stdio.h>

#include "cpu_device.h"

int main(int argc, char** argv)
{
    cpuinfo* info;
    cpu_device* cpu = new cpu_device;
    info = cpu->get_cpu_info();

    printf("model = %s\n", info->model_name.c_str());

    delete cpu;
    return 0;
}