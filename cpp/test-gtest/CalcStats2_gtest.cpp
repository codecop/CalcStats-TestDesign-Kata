#include <gtest/gtest.h>

#include "CalcStats2.h"

using namespace std;


TEST(CalcStats2Test, Count) {
    auto calcStats2 = CalcStats2({});
    ASSERT_EQ(0, calcStats2.count());
}
