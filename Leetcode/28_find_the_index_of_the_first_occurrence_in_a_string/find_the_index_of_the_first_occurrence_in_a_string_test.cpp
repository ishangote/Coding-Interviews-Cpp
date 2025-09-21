#include <gtest/gtest.h>

#include <string>

// Forward declaration of the function to test
int find_index_of_first_occurrence(const std::string& haystack, const std::string& needle);

TEST(FindIndexOfFirstOccurrenceTest, BasicCases) {
    EXPECT_EQ(find_index_of_first_occurrence("hello", "ll"), 2);
    EXPECT_EQ(find_index_of_first_occurrence("aaaaa", "bba"), -1);
    EXPECT_EQ(find_index_of_first_occurrence("leetcode", "leeto"), -1);
    EXPECT_EQ(find_index_of_first_occurrence("sadbutsad", "sad"), 0);
    EXPECT_EQ(find_index_of_first_occurrence("sadbutsad", "but"), 3);
}

TEST(FindIndexOfFirstOccurrenceTest, EdgeCases) {
    EXPECT_EQ(find_index_of_first_occurrence("", ""), 0);      // both empty
    EXPECT_EQ(find_index_of_first_occurrence("a", ""), 0);     // empty needle
    EXPECT_EQ(find_index_of_first_occurrence("", "a"), -1);    // empty haystack
    EXPECT_EQ(find_index_of_first_occurrence("a", "a"), 0);    // exact match
    EXPECT_EQ(find_index_of_first_occurrence("a", "aa"), -1);  // needle longer
}

TEST(FindIndexOfFirstOccurrenceTest, RepeatedPatterns) {
    EXPECT_EQ(find_index_of_first_occurrence("aaaaa", "aaa"), 0);  // first match wins
    EXPECT_EQ(find_index_of_first_occurrence("mississippi", "issip"), 4);
    EXPECT_EQ(find_index_of_first_occurrence("mississippi", "issi"), 1);
}

TEST(FindIndexOfFirstOccurrenceTest, NotFoundCases) {
    EXPECT_EQ(find_index_of_first_occurrence("abcdef", "gh"), -1);
    EXPECT_EQ(find_index_of_first_occurrence("abcdef", "xyz"), -1);
}
