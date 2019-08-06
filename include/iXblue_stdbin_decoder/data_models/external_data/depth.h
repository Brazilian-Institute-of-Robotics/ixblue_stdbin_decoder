#pragma once
#include <inttypes.h>

namespace StdBinDecoder
{
namespace Data
{

struct Depth
{
    int32_t validityTime_100us; /* Time tag in steps of 100micros */
    float depth_m;
    float depth_stddev_m;
};
} // namespace Data
} // namespace StdBinDecoder