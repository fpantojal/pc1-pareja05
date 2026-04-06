#include "vector_adapter.h"
#include "solution.hpp"
#include "mini_bench.h"
#include <vector>

int main() {
    const int trials = 5;
    const std::vector<int> sizes = {1000, 5000, 10000, 50000, 100000};

    std::vector<int> pricesVector;

    for (int n : sizes) {
        pricesVector.resize(n);
        for (int i = 0; i < n; ++i) {
            pricesVector[i] = rand() % 10001;
        }
        CC232::vector<int> prices = pricesVector;

        CC232::bench::print_header("Benchmarking Max Profit Solutions", n, trials);

        double optimal_avg_us = CC232::bench::average_us(trials, [&]() {
            maxProfit(prices);
        });
        CC232::bench::print_result("Optimal Solution", optimal_avg_us);

        double brute_force_avg_us = CC232::bench::average_us(trials, [&]() {
            maxProfitBruteForce(prices);
        });
        CC232::bench::print_result("Brute Force Solution", brute_force_avg_us);

        std::cout << "----------------------------------------\n";
    }

    return 0;
}