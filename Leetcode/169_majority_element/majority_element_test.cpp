#include <gtest/gtest.h>

#include <vector>

// Forward declaration of the function to test
int majority_element(std::vector<int>& nums);

TEST(MajorityElementTest, LeetcodeExample1) {
    std::vector<int> nums = {3, 2, 3};
    EXPECT_EQ(3, majority_element(nums));
}

TEST(MajorityElementTest, LeetcodeExample2) {
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    EXPECT_EQ(2, majority_element(nums));
}