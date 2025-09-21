#include <gtest/gtest.h>

#include <numeric>  // For std::accumulate
#include <unordered_set>
#include <vector>

// Forward declaration of the function to test
std::vector<int> sum_zero(int n);

TEST(FindNUniqueIntegersSumUpToZero, OddNExample) {
    int n = 5;
    std::vector<int> result = sum_zero(n);

    // Check the size
    EXPECT_EQ(result.size(), n);

    // Check the sum is zero
    int sum = std::accumulate(result.begin(), result.end(), 0);
    EXPECT_EQ(sum, 0);

    // Check all elements are unique
    std::unordered_set<int> unique_elements(result.begin(), result.end());
    EXPECT_EQ(unique_elements.size(), n);
}

TEST(FindNUniqueIntegersSumUpToZero, EvenNExample) {
    int n = 4;
    std::vector<int> result = sum_zero(n);

    // Check the size
    EXPECT_EQ(result.size(), n);

    // Check the sum is zero
    int sum = std::accumulate(result.begin(), result.end(), 0);
    EXPECT_EQ(sum, 0);

    // Check all elements are unique
    std::unordered_set<int> unique_elements(result.begin(), result.end());
    EXPECT_EQ(unique_elements.size(), n);
}
