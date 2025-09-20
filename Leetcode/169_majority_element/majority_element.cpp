#include <vector>

// Time: O(n), where n => nubmer of integers in nums
// Space: O(1)
int majority_element(std::vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }

        if (num == candidate) {
            count++;
        } else {
            count -= 1;
        }
    }

    return candidate;
}