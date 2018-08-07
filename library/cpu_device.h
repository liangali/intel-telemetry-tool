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

class cpu_device
{
private:
    cpuinfo info;
public:
    cpu_device(/* args */);
    ~cpu_device();

    cpuinfo* get_cpu_info();
};