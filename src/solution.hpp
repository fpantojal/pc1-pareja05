#pragma once

#include "list_interface.h"
#include <vector>

struct BuyAndSellStats
{
    int comparisons = 0;
    int updates = 0;
    int maxProfit = 0;
};

BuyAndSellStats maxProfit(const ListInterface<int>& prices);
BuyAndSellStats maxProfitBruteForce(const ListInterface<int>& prices);