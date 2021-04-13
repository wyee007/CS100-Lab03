#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"
#include "op.hpp"

TEST(MultTest, MultTestWTwoNonZero){
	Op* five = new Op(5);
	Op* six = new Op(6);
	Mult* test = new Mult(five, six);
	EXPECT_EQ(test->evaluate(), 30);
}
TEST(MultTest, MultStringifyTwoNonZero){
	Op* five = new Op(5);
	Op* six = new Op(6);
	Mult* test = new Mult(five, six);
	EXPECT_EQ(test->stringify(), "(5.000000*6.000000)");
}
#endif //__MULT_TEST_HPP__
