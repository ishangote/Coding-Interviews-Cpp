/*
# 1768. Merge Strings Alternately
# Given two strings word1 and word2, merge them by alternating characters
# starting with word1. If one string is longer, append the remaining letters.
# Return the merged string.
#
# Example: word1="abc", word2="pqr" -> "apbqcr"
*/

#include <string>

std::string merge_alternately(const std::string& word1,
                              const std::string& word2) {
  std::string res;
  int idx = 0;

  res.reserve(word1.size() + word2.size());

  while (idx < word1.size() || idx < word2.size()) {
    if (idx < word1.size()) res += word1[idx];
    if (idx < word2.size()) res += word2[idx];

    idx++;
  }

  return res;
}
