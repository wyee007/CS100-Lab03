#ifndef __TESTINGTESTING_HPP__
#define __TESTINGTESTING_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "base.hpp"

TEST(OPTEST2, Addition){
	Base* eight = new Op(8);
	Base* ten = new Op(10);
	Base* test = new Add(eight, ten);
	EXPECT_EQ(test->evaluate(), 18);
}
TEST(OPTEST2, Subtraction){
	Base* eight = new Op(8);
	Base* ten = new Op(10);
	Base* test = new Sub(eight, ten);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(OPTEST2, Power){
	Base* eight = new Op(8);
	Base* ten = new Op(10);
	Base* test = new Pow(8, 10);
	EXPECT_EQ(test->evaluate(), 1073741824);
}