#include <hal/HAL.h>

#include "gtest/gtest.h"

// unimportant change to commit
int main(int argc, char** argv) {
  HAL_Initialize(500, 0);
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}
