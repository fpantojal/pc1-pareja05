#include "solution.hpp"
#include <algorithm>
#include <limits>
#include <vector>

BuyAndSellStats maxProfit(const std::vector<int>& prices)
{
    BuyAndSellStats stats;
    int minPrice = std::numeric_limits<int>::max();

    for (const auto& price : prices)
    {
        stats.comparisions++;
        if (price < minPrice)
        {
            minPrice = price;
        }
        else
        {
            stats.comparisions++;
            int profit = price - minPrice;
            if (profit > stats.maxProfit)
            {
                stats.maxProfit = profit;
                stats.updates++;
            }
        }
    }

    return stats;
}

BuyAndSellStats maxProfitBruteForce(const std::vector<int>& prices)
{
    BuyAndSellStats stats;

    for (size_t i = 0; i < prices.size(); ++i)
    {
        for (size_t j = i + 1; j < prices.size(); ++j)
        {
            stats.comparisions++;
            int profit = prices[j] - prices[i];
            if (profit > stats.maxProfit)
            {
                stats.maxProfit = profit;
                stats.updates++;
            }
        }
    }

    return stats;
}