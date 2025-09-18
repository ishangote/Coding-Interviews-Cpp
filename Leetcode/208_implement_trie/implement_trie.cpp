#include "208_implement_trie/implement_trie.h"

#include <string>
#include <unordered_map>

TrieNode::TrieNode(char c) : ch(c), word_end(false) {}

Trie::Trie() : root(new TrieNode('\0')) {}

void Trie::add_word(const std::string& word) {
    if (word.empty()) return;

    TrieNode* node = root;
    for (char c : word) {
        if (node->children.find(c) != node->children.end()) {
            node = node->children[c];
        } else {
            TrieNode* new_node = new TrieNode(c);
            node->children[c] = new_node;
            node = new_node;
        }
    }
    node->word_end = true;
}

bool Trie::search_word(const std::string& word) {
    if (word.empty()) return true;

    TrieNode* node = root;
    for (char c : word) {
        if (node->children.find(c) != node->children.end()) {
            node = node->children[c];
        } else {
            return false;
        }
    }
    return node->word_end;
}

bool Trie::starts_with(const std::string& prefix) {
    if (prefix.empty()) return true;

    TrieNode* node = root;
    for (char c : prefix) {
        if (node->children.find(c) != node->children.end()) {
            node = node->children[c];
        } else {
            return false;
        }
    }
    return true;
}