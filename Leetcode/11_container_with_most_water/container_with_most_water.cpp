#include <vector>

int container_with_most_water(std::vector<int>& heights) {
    if (heights.size() < 2) return 0;
    int left = 0, right = heights.size() - 1, max_area = 0;

    while (left < right) {
        int current_area = std::min(heights[left], heights[right]) * (right - left);
        max_area = std::max(current_area, max_area);

        if (heights[left] <= heights[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}
