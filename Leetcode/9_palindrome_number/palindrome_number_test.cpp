#include <gtest/gtest.h>

// Forward declaration of the function to test
bool is_palindrome(int number);

// Single digit numbers are always palindromes
TEST(PalindromeNumberTest, SingleDigitNumbers) {
  EXPECT_TRUE(is_palindrome(0));
  EXPECT_TRUE(is_palindrome(7));
  EXPECT_TRUE(is_palindrome(9));
}

// Large palindrome number
TEST(PalindromeNumberTest, LargePalindrome) {
  EXPECT_TRUE(is_palindrome(123454321));
}

// Large non-palindrome number
TEST(PalindromeNumberTest, LargeNonPalindrome) {
  EXPECT_FALSE(is_palindrome(123456789));
}
