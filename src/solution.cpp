#include "solution.hpp"
#include <cassert>
#include <vector>

BuyAndSellStats maxProfit(const ListInterface<int>& prices)
{
    BuyAndSellStats stats;
    int buy = prices[0];

    for (size_t i = 1; i < prices.size(); i++)
    {
        int sell = prices[i];

        if (buy < sell) {
            stats.comparisons += 2;
            if (sell - buy > stats.maxProfit) {
                stats.maxProfit = sell - buy;
                stats.updates++;
            }
        } else {
            buy = sell;
        }
    }

    return stats;
}

BuyAndSellStats maxProfitBruteForce(const ListInterface<int>& prices)
{
    BuyAndSellStats stats;

    for (size_t i = 0; i < prices.size(); ++i)
    {
        for (size_t j = i + 1; j < prices.size(); ++j)
        {
            int profit = prices[j] - prices[i];
            stats.comparisons++;
            if (profit > stats.maxProfit)
            {
                stats.maxProfit = profit;
                stats.updates++;
            }
        }
    }
    
    return stats;
}