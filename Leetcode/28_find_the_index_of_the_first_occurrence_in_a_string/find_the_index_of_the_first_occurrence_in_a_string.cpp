#include <string>

// Time: O(n * m), where n => length of haystack, m => length of needle
// Space: O(1)
int find_index_of_first_occurrence(const std::string& haystack, const std::string& needle) {
    if (needle.empty()) return 0;
    if (needle.size() > haystack.size()) return -1;

    for (size_t i = 0; i < haystack.size() - needle.size() + 1; i++) {
        if (haystack.substr(i, needle.size()) == needle) {
            return static_cast<int>(i);
        }
    }

    return -1;
}
