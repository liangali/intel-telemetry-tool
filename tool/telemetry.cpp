#include<stdio.h>
#include "cpu_device.h"

int main(int argc, char** argv)
{
    int ret = 0;
    cpuinfo info = {};

    ret = get_cpu_device_info(&info);
    if(ret != 0)
    {
        printf("ERROR: failed to get cpu info!\n");
        return ret;
    }

    printf("model = %s\n", info.model_name.c_str());

    return 0;
}