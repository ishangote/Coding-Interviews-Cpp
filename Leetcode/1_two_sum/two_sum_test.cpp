#include <gtest/gtest.h>

#include <vector>

using namespace std;

// Forward declaration of the function to test
vector<int> two_sum(vector<int>& nums, int target);

TEST(TwoSumTest, Example1) {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = two_sum(nums, target);

    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
}

TEST(TwoSumTest, NegativeNumbers) {
    vector<int> nums = {-3, 4, 3, 90};
    int target = 0;
    vector<int> result = two_sum(nums, target);

    ASSERT_EQ(result.size(), 2);
    EXPECT_EQ(nums[result[0]] + nums[result[1]], target);
}

TEST(TwoSumTest, DuplicateNumbers) {
    vector<int> nums = {3, 3};
    int target = 6;
    vector<int> result = two_sum(nums, target);

    ASSERT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
    EXPECT_EQ(nums[result[0]] + nums[result[1]], target);
}

TEST(TwoSumTest, NoSolution) {
    vector<int> nums = {1, 2, 3};
    int target = 10;
    vector<int> result = two_sum(nums, target);

    EXPECT_EQ(result.size(), 0);
}

TEST(TwoSumTest, SingleElement) {
    vector<int> nums = {5};
    int target = 5;
    vector<int> result = two_sum(nums, target);

    EXPECT_EQ(result.size(), 0);
}
