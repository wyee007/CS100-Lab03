#include "gtest/gtest.h"
#include "testingtesting.hpp"
#include "op_test.hpp"
#include "mult_test.hpp"
#include "div_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
