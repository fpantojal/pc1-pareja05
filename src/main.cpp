#include <iostream>
#include <vector>
#include "solution.cpp"
#include <iomanip>

void printStats(const BuyAndSellStats& stats, const std::string& method)
{
    std::cout << method << " - Max Profit: " << stats.maxProfit
              << ", Comparisons: " << stats.comparisions
              << ", Updates: " << stats.updates << std::endl;
}

int main()
{
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    BuyAndSellStats optimalStats = maxProfit(prices);
    BuyAndSellStats bruteForceStats = maxProfitBruteForce(prices);

    printStats(optimalStats, "Optimal Solution");
    printStats(bruteForceStats, "Brute Force Solution");

    return 0;
}