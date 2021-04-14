#ifndef __TEST_MULTIPLE_CLASS_HPP__
#define __TEST_MULTIPLE_CLASS_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "base.hpp"
#include "op.hpp"
#include "sub.hpp"
#include "pow.hpp"

TEST(CombinedEffort, addMultTest){
	Op* five = new Op(5);
	Op* seven = new Op(7);
	Op* ten = new Op(10);
	Mult* sevten = new Mult(seven, ten);
	Add* test = new Add(sevten, five);
	EXPECT_EQ(test->evaluate(), 75);
}
TEST(CombinedEffort, divAddTest){
	Op* five = new Op(5);
        Op* seven = new Op(7);
        Op* ten = new Op(10);
	Div* two = new Div(ten, five);
	Add* test = new Add(two, seven);
	EXPECT_EQ(test->evaluate(), 9);
}
TEST(CombinedEffort, divSubTest){
	Op* five = new Op(5);
        Op* seven = new Op(7);
        Op* ten = new Op(10);
	Div* two = new Div(ten, five);
	Sub* test = new Sub(ten,two);
	EXPECT_EQ(test->evaluate(), 8);
}
TEST(CombinedEffort, divPowTest){
	Op* five = new Op(5);
        Op* seven = new Op(7);
        Op* ten = new Op(10);
	Div* two = new Div(ten, five);
	Pow* test = new Pow(ten, two);
	EXPECT_EQ(test->evaluate(), 100);
}
TEST(CombinedEffort, divMultTest){
	Op* five = new Op(5);
        Op* seven = new Op(7);
        Op* ten = new Op(10);
	Div* two = new Div(ten, five);
	Mult* test = new Mult(two, seven);
	EXPECT_EQ(test->evaluate(), 14);
}
TEST(CombinedEffort, divMultAddSubPowTest){
	Op* five = new Op(5);
        Op* seven = new Op(7);
        Op* ten = new Op(10);
	Div* two = new Div(ten, five);
	Mult* fourteen = new Mult(two, seven);
	Add* nineteen = new Add(fourteen, five);
	Sub* nine = new Sub(nineteen, ten);
	Pow* test = new Pow(nine, two);
	EXPECT_EQ(test->evaluate(), 81);
}

#endif //__TEST_MULTIPLE_CLASS_HPP__
