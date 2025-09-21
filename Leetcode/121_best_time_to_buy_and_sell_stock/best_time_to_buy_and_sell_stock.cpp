#include <limits>
#include <vector>

// Time: O(n), where n => size of prices
// Space: O(1)
int max_profit(std::vector<int>& prices) {
    int max_profit{0};
    int min_price{std::numeric_limits<int>::max()};

    for (int price : prices) {
        if (price < min_price) {
            min_price = price;
        }

        int profit = price - min_price;
        if (profit > max_profit) {
            max_profit = profit;
        }
    }

    return max_profit;
}
