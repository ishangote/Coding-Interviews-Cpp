#include <gtest/gtest.h>

#include <vector>

// Forward declaration
std::vector<int> plus_one(std::vector<int>& digits);

TEST(PlusOneTest, NormalIncrement) {
    std::vector<int> digits{1, 2, 3};
    std::vector<int> expected{1, 2, 4};
    EXPECT_EQ(plus_one(digits), expected);
}

TEST(PlusOneTest, CarryPropagation) {
    std::vector<int> digits{1, 2, 9};
    std::vector<int> expected{1, 3, 0};
    EXPECT_EQ(plus_one(digits), expected);
}

TEST(PlusOneTest, AllNines) {
    std::vector<int> digits{9, 9, 9};
    std::vector<int> expected{1, 0, 0, 0};
    EXPECT_EQ(plus_one(digits), expected);
}

TEST(PlusOneTest, SingleDigitNoCarry) {
    std::vector<int> digits{5};
    std::vector<int> expected{6};
    EXPECT_EQ(plus_one(digits), expected);
}

TEST(PlusOneTest, SingleDigitCarry) {
    std::vector<int> digits{9};
    std::vector<int> expected{1, 0};
    EXPECT_EQ(plus_one(digits), expected);
}

TEST(PlusOneTest, LeadingZeros) {
    std::vector<int> digits{0, 0, 1, 2, 3};
    std::vector<int> expected{0, 0, 1, 2, 4};
    EXPECT_EQ(plus_one(digits), expected);
}
