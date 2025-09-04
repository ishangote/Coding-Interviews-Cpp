#include <string>
#include <unordered_map>

class TrieNode {
 public:
  char ch;
  std::unordered_map<char, TrieNode*> children;
  bool word_end;

  TrieNode(char c);
};

class Trie {
 private:
  TrieNode* root;

 public:
  Trie();

 public:
  void add_word(const std::string& word);
  bool search_word(const std::string& word);
  bool starts_with(const std::string& prefix);
};