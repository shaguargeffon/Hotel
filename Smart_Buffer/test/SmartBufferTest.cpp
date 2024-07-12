#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "SmartBuffer.hpp"

using ::testing::Return;

class MockSmartBuffer;


class MockSmartBuffer: public SB::SmartBuffer{
public:
    MOCK_METHOD(std::uint8_t, mytest, (std::uint8_t), ());

};


TEST(AddElementTest, PositiveTest) {

   SB::SmartBuffer smart_buffer{};

    std::string element("aaa");

    smart_buffer.AddElement(element);

    auto ele = smart_buffer.GetFirstElement();

    EXPECT_EQ(std::get<0>(ele), true);   
    EXPECT_EQ(std::get<1>(ele), "aaa"); 
}



TEST(AddElementTest1, PositiveTest1) {
    MockSmartBuffer test;
    //EXPECT_CALL(test, mytest(5)).Times(1).WillOnce(Return(10));

    //auto res = SB::test_function(10);
    //EXPECT_EQ(res, 20);
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}


