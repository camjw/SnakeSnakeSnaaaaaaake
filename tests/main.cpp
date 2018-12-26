#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "food_test.h"

int main(int argc, char **argv) {
  testing::InitGoogleMock(&argc, argv);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
