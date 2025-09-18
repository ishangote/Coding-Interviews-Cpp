#include <gtest/gtest.h>

#include <string>

// Forward declaration of the function to test
std::string merge_alternately(const std::string& word1, const std::string& word2);

TEST(TestMergeAlternately, LeetcodeExample1) {
    std::string word1 = "abc";
    std::string word2 = "pqr";

    std::string res = merge_alternately(word1, word2);

    EXPECT_EQ(res, "apbqcr");
}

TEST(TestMergeAlternately, LeetcodeExample2) {
    std::string word1 = "ab";
    std::string word2 = "pqrs";

    std::string res = merge_alternately(word1, word2);

    EXPECT_EQ(res, "apbqrs");
}

TEST(TestMergeAlternately, LeetcodeExample3) {
    std::string word1 = "abcd";
    std::string word2 = "pq";

    std::string res = merge_alternately(word1, word2);

    EXPECT_EQ(res, "apbqcd");
}
