#include <unordered_map>
#include <vector>

using namespace std;

vector<int> two_sum(vector<int>& nums, int target) {
    unordered_map<int, int> nums_to_index;

    for (int idx = 0; idx < nums.size(); idx++) {
        if (nums_to_index.find(target - nums[idx]) != nums_to_index.end()) {
            return {nums_to_index[target - nums[idx]], idx};
        }
        nums_to_index[nums[idx]] = idx;
    }
    return {};
}
