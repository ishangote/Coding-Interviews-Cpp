#include <gtest/gtest.h>

#include <string>

// Forward declaration of the function
int can_be_typed_words(std::string& text, std::string& broken_letters);

TEST(CanBeTypedWordsTest, BasicTests) {
    std::string text1 = "hello world";
    std::string broken1 = "ad";
    EXPECT_EQ(can_be_typed_words(text1, broken1), 1);  // Only "hello" can be typed

    std::string text2 = "leet code";
    std::string broken2 = "lt";
    EXPECT_EQ(can_be_typed_words(text2, broken2), 1);  // Only "code" can be typed

    std::string text3 = "a b c d e";
    std::string broken3 = "abc";
    EXPECT_EQ(can_be_typed_words(text3, broken3), 2);  // Only "d" and "e"

    std::string text4 = "typing test is fun";
    std::string broken4 = "";
    EXPECT_EQ(can_be_typed_words(text4, broken4), 4);  // All words can be typed

    std::string text5 = "cannot type anything";
    std::string broken5 = "abcdefghijklmnopqrstuvwxyz";
    EXPECT_EQ(can_be_typed_words(text5, broken5), 0);  // No word can be typed
}

TEST(CanBeTypedWordsTest, EdgeCases) {
    std::string text1 = "";
    std::string broken1 = "abc";
    EXPECT_EQ(can_be_typed_words(text1, broken1), 0);  // Empty text

    std::string text2 = "single";
    std::string broken2 = "s";
    EXPECT_EQ(can_be_typed_words(text2, broken2), 0);  // Word contains broken letter

    std::string text3 = "single";
    std::string broken3 = "x";
    EXPECT_EQ(can_be_typed_words(text3, broken3), 1);  // Word can be typed
}
