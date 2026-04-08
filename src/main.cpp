#include "vector_adapter.h"
#include "solution.hpp"

#include <iostream>
#include <iomanip>
#include <vector>

void printStats(const BuyAndSellStats& stats, const std::string& method)
{
    std::cout << method << " - Max Profit: " << stats.maxProfit
              << ", Comparisons: " << stats.comparisons
              << ", Updates: " << stats.updates << std::endl;
}

int main()
{
    CC232::vector<int> prices = {7, 1, 5, 3, 6, 4};

    BuyAndSellStats optimalStats = maxProfit(prices);
    BuyAndSellStats bruteForceStats = maxProfitBruteForce(prices);

    printStats(optimalStats, "Optimal Solution");
    printStats(bruteForceStats, "Brute Force Solution");
    
    return 0;
}