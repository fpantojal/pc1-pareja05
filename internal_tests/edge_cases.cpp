#include <cassert>
#include "vector_adapter.h"
#include "solution.hpp"

int main() {
    // Test with a single price
    assert(maxProfit(CC232::vector<int>{5}).maxProfit == 0);
    assert(maxProfitBruteForce(CC232::vector<int>{5}).maxProfit == 0);
    
    // Test with all prices the same
    assert(maxProfit(CC232::vector<int>{3, 3, 3, 3}).maxProfit == 0);
    assert(maxProfitBruteForce(CC232::vector<int>{3, 3, 3, 3}).maxProfit == 0);

    // Test with increasing prices
    assert(maxProfit(CC232::vector<int>{1, 2, 3, 4, 5}).maxProfit == 4);
    assert(maxProfitBruteForce(CC232::vector<int>{1, 2, 3, 4, 5}).maxProfit == 4);

    // Test with decreasing prices
    assert(maxProfit(CC232::vector<int>{5, 4, 3, 2, 1}).maxProfit == 0);
    assert(maxProfitBruteForce(CC232::vector<int>{5, 4, 3, 2, 1}).maxProfit == 0);

    return 0;
}