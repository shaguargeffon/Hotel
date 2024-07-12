#include "SmartBuffer.hpp"

namespace SB {

std::uint8_t test_function(std::uint8_t val)  {
    SmartBuffer buffer;
    auto a = buffer.mytest(8);
    return a *2 ;
}


}
