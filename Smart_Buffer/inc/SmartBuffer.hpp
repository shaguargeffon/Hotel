#ifndef SMART_BUFFER_H
#define SMART_BUFFER_H

#include <string>
#include <list>
#include <tuple>
#include <iostream>

namespace SB {


extern std::uint8_t test_function(std::uint8_t val); 


class SmartBuffer{

public:

   std::uint8_t mytest(std::uint8_t val){
        return val +2 ;
    }


    void AddElement(std::string element) {
        buffer_.emplace_back(element);
    }

    std::tuple<bool, std::string> GetFirstElement() {
        if(!buffer_.empty()) {
            auto ret = buffer_.front();
            buffer_.pop_front();
            return std::make_tuple(true, ret);
        }
        else{
            return std::make_tuple(false, "");
        }
    }


private:

    std::list<std::string> buffer_{};

};




}

#endif
