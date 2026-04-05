#pragma once
#include <vector>

struct BuyAndSellStats
{
    int comparisions = 0;
    int updates = 0;
    int maxProfit = 0;
};

BuyAndSellStats maxProfit(const std::vector<int>& prices);
BuyAndSellStats maxProfitBruteForce(const std::vector<int>& prices);


