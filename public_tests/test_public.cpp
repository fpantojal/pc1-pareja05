#include <cassert>
#include "vector_adapter.h"
#include "solution.hpp"

int main()
{
    assert(maxProfit(CC232::vector<int>{7, 1, 5, 3, 6, 4}).maxProfit == 5);
    assert(maxProfit(CC232::vector<int>{1, 2, 3, 4, 5}).maxProfit == 4);
    assert(maxProfit(CC232::vector<int>{7, 6, 4, 3, 1}).maxProfit == 0);
    
    assert(maxProfitBruteForce(CC232::vector<int>{7, 1, 5, 3, 6, 4}).maxProfit == 5);
    assert(maxProfitBruteForce(CC232::vector<int>{1, 2, 3, 4, 5}).maxProfit == 4);
    assert(maxProfitBruteForce(CC232::vector<int>{7, 6, 4, 3, 1}).maxProfit == 0);
    
    return 0;
}