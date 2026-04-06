#include "vector_adapter.h"
#include "solution.hpp"

#include <cassert>
#include <cstdlib>
#include <ctime>

int main() {
    //Check if the optimal solution is not less efficient than the brute force solution
    std::vector<int> pricesVector(100000);
    srand(time(0));
    for (size_t i = 0; i < pricesVector.size(); ++i) {
        pricesVector[i] = rand() % 10001;
    }
    auto result_optimal = maxProfit(CC232::vector<int>(pricesVector));
    auto result_brute_force = maxProfitBruteForce(CC232::vector<int>(pricesVector));
    assert(result_optimal.maxProfit == result_brute_force.maxProfit);
    assert(result_optimal.comparisons <= result_brute_force.comparisons);
    assert(result_optimal.updates <= result_brute_force.updates);

    return 0;
}