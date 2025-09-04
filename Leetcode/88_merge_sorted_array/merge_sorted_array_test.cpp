#include <gtest/gtest.h>

#include <vector>

// Forward declaration of the function to test
void merge_sorted_arrays(std::vector<int>& nums1, int m,
                         std::vector<int>& nums2, int n);

TEST(MergeSortedArraysTest, LeetcodeExample) {
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> nums2 = {2, 5, 6};
  merge_sorted_arrays(nums1, 3, nums2, 3);
  EXPECT_EQ(nums1, (std::vector<int>{1, 2, 2, 3, 5, 6}));
}

TEST(MergeSortedArraysTest, EmptyNums2) {
  std::vector<int> nums1 = {1, 2, 3};
  std::vector<int> nums2 = {};
  merge_sorted_arrays(nums1, 3, nums2, 0);
  EXPECT_EQ(nums1, (std::vector<int>{1, 2, 3}));
}

TEST(MergeSortedArraysTest, EmptyNums1) {
  std::vector<int> nums1 = {0, 0, 0};
  std::vector<int> nums2 = {2, 5, 6};
  merge_sorted_arrays(nums1, 0, nums2, 3);
  EXPECT_EQ(nums1, (std::vector<int>{2, 5, 6}));
}

TEST(MergeSortedArraysTest, Interleaved) {
  std::vector<int> nums1 = {1, 3, 5, 0, 0, 0};
  std::vector<int> nums2 = {2, 4, 6};
  merge_sorted_arrays(nums1, 3, nums2, 3);
  EXPECT_EQ(nums1, (std::vector<int>{1, 2, 3, 4, 5, 6}));
}

TEST(MergeSortedArraysTest, AllNums2Smaller) {
  std::vector<int> nums1 = {4, 5, 6, 0, 0, 0};
  std::vector<int> nums2 = {1, 2, 3};
  merge_sorted_arrays(nums1, 3, nums2, 3);
  EXPECT_EQ(nums1, (std::vector<int>{1, 2, 3, 4, 5, 6}));
}

TEST(MergeSortedArraysTest, AllNums2Larger) {
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> nums2 = {4, 5, 6};
  merge_sorted_arrays(nums1, 3, nums2, 3);
  EXPECT_EQ(nums1, (std::vector<int>{1, 2, 3, 4, 5, 6}));
}
