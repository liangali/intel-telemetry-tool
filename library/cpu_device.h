
#include "interface.h"

class cpu_device
{
private:
    cpuinfo info;
public:
    cpu_device(/* args */);
    ~cpu_device();

    cpuinfo* get_cpu_info();
};