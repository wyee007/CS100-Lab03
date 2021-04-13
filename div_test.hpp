#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"
#include "op.hpp"

TEST(DivTest, DivTestWithNonZero){
	Op* thirtyNine = new Op(39);
	Op* thirteen = new Op(13);
	Div* test = new Div(thirtyNine, thirteen);
	EXPECT_EQ(test->evaluate(), 3);
}
TEST(DivTest, DivStringifyWithNonZero){
	Op* thirtyNine = new Op(39);
	Op* thirteen = new Op(13);
	Div* test = new Div(thirtyNine, thirteen);
	EXPECT_EQ(test->stringify(), "(39.000000/13.000000)");
}
#endif //__DIV_TEST_HPP__

