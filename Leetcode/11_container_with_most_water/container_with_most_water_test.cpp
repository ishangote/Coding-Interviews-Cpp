#include <gtest/gtest.h>

#include <vector>

// Forward declaration
int container_with_most_water(std::vector<int>& heights);

// TESTS

TEST(ContainerWithMostWaterTest, LeetcodeExample1) {
    std::vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    EXPECT_EQ(container_with_most_water(heights), 49);
}

TEST(ContainerWithMostWaterTest, LeetcodeExample2) {
    std::vector<int> heights = {1, 1};
    EXPECT_EQ(container_with_most_water(heights), 1);
}

TEST(ContainerWithMostWaterTest, EqualHeights) {
    std::vector<int> heights = {5, 5, 5, 5};
    EXPECT_EQ(container_with_most_water(heights), 15);
}

TEST(ContainerWithMostWaterTest, AscendingHeights) {
    std::vector<int> heights = {1, 2, 3, 4, 5};
    EXPECT_EQ(container_with_most_water(heights), 6);
}

TEST(ContainerWithMostWaterTest, DescendingHeights) {
    std::vector<int> heights = {5, 4, 3, 2, 1};
    EXPECT_EQ(container_with_most_water(heights), 6);
}

TEST(ContainerWithMostWaterTest, TwoElements) {
    std::vector<int> heights = {3, 7};
    EXPECT_EQ(container_with_most_water(heights), 3);
}

TEST(ContainerWithMostWaterTest, TallEnds) {
    std::vector<int> heights = {10, 1, 1, 1, 10};
    EXPECT_EQ(container_with_most_water(heights), 40);
}

TEST(ContainerWithMostWaterTest, TallMiddle) {
    std::vector<int> heights = {1, 100, 100, 1};
    EXPECT_EQ(container_with_most_water(heights), 100);
}

TEST(ContainerWithMostWaterTest, SingleElement) {
    std::vector<int> heights = {5};
    EXPECT_EQ(container_with_most_water(heights), 0);
}

TEST(ContainerWithMostWaterTest, Empty) {
    std::vector<int> heights = {};
    EXPECT_EQ(container_with_most_water(heights), 0);
}
