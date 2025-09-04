#include "208_implement_trie/implement_trie.h"

#include <gtest/gtest.h>

// Test inserting and searching words
TEST(TrieTest, AddAndsearch_word) {
  Trie trie;
  trie.add_word("apple");
  trie.add_word("app");
  trie.add_word("apex");

  EXPECT_TRUE(trie.search_word("apple"));
  EXPECT_TRUE(trie.search_word("app"));
  EXPECT_TRUE(trie.search_word("apex"));

  EXPECT_FALSE(trie.search_word("appl"));
  EXPECT_FALSE(trie.search_word("banana"));
}

// Test prefix search
TEST(TrieTest, StartsWith) {
  Trie trie;
  trie.add_word("cat");
  trie.add_word("car");
  trie.add_word("carbon");

  EXPECT_TRUE(trie.starts_with("ca"));
  EXPECT_TRUE(trie.starts_with("car"));
  EXPECT_TRUE(trie.starts_with("carbon"));

  EXPECT_FALSE(trie.starts_with("dog"));
  EXPECT_FALSE(trie.starts_with("cab"));
}

// Test empty string behavior
TEST(TrieTest, EmptyStrings) {
  Trie trie;

  EXPECT_TRUE(trie.search_word(""));  // your design treats "" as valid
  EXPECT_TRUE(trie.starts_with(""));

  trie.add_word("");
  EXPECT_TRUE(trie.search_word(""));
}
