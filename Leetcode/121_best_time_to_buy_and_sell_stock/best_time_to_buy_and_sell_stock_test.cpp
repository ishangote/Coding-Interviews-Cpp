#include <gtest/gtest.h>

#include <vector>

// Forward declaration of the function to test
int max_profit(std::vector<int>& prices);

TEST(BestTimeToBuyAndSellStock, Example1) {
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    EXPECT_EQ(max_profit(prices), 5);  // Buy at 1, sell at 6
}

TEST(BestTimeToBuyAndSellStock, Example2) {
    std::vector<int> prices{7, 6, 4, 3, 1};
    EXPECT_EQ(max_profit(prices), 0);  // No profit possible
}

TEST(BestTimeToBuyAndSellStock, IncreasingPrices) {
    std::vector<int> prices{1, 2, 3, 4, 5};
    EXPECT_EQ(max_profit(prices), 4);  // Buy at 1, sell at 5
}

TEST(BestTimeToBuyAndSellStock, SingleElement) {
    std::vector<int> prices{5};
    EXPECT_EQ(max_profit(prices), 0);  // Can't sell if only one price
}

TEST(BestTimeToBuyAndSellStock, EmptyPrices) {
    std::vector<int> prices{};
    EXPECT_EQ(max_profit(prices), 0);  // No transactions possible
}

TEST(BestTimeToBuyAndSellStock, ProfitAtEnd) {
    std::vector<int> prices{9, 8, 7, 10};
    EXPECT_EQ(max_profit(prices), 3);  // Buy at 7, sell at 10
}

TEST(BestTimeToBuyAndSellStock, MultipleProfitsButOneMax) {
    std::vector<int> prices{2, 4, 1, 7};
    EXPECT_EQ(max_profit(prices), 6);  // Best is buy at 1, sell at 7
}