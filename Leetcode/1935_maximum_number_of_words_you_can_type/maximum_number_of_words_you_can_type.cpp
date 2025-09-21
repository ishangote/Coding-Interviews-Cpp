#include <sstream>
#include <string>
#include <unordered_set>

// Time: O(n * m), n => number of words in text and m => average size of word
// Space: O(k), k => nubmer of broken letters
int can_be_typed_words(std::string& text, std::string& broken_letters) {
    std::unordered_set<char> broken_letters_set(broken_letters.begin(), broken_letters.end());
    // Create an input string stream from the text
    std::istringstream iss(text);
    std::string word;
    int count{0};

    while (iss >> word) {
        bool can_type{true};
        for (char c : word) {
            if (broken_letters_set.count(c)) {
                can_type = false;
                break;
            }
        }
        if (can_type) count++;
    }

    return count;
}
