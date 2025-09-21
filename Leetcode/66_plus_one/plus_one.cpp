#include <vector>

// Time: O(n), where n => length of digits
// Space: O(1)
// Note: Technically, when you insert 1 at the beginning, it requires O(n) time and space to shift
// all elements.
std::vector<int> plus_one(std::vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
        digits[i] += 1;
        if (digits[i] < 10) return digits;
        digits[i] = 0;
    }

    digits.emplace(digits.begin(), 1);
    return digits;
}
