//
// Created by tuddy on 16-Apr-24.
//

#include <gtest/gtest.h>
#include "../src/domain/Fruit.h"

TEST(TestEmpty, AssertIntEQ) {

    EXPECT_EQ(4, 4);

}


TEST(TestEmpty, AssertDoubleEQ) {

    EXPECT_EQ(3.14, 3.14);

}

TEST(TestEmpty, TestFruit) {

    Fruit f("berries", "Spain", Date(18, 4, 2024), 4, 42.0);
    EXPECT_EQ(4, f.getQuantity());

}

