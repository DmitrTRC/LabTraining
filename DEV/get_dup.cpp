//
// Created by moroz on 18.11.2021.
//

#include <vector>
#include <numeric>
#include <iostream>
#include <chrono>


int main() {
    std::vector<int> v{1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10};

    auto start = std::chrono::high_resolution_clock::now();

    std::cout << std::accumulate(v.begin(), v.end(), 0, [](int lhs, int rhs) { ;
        return lhs ^ rhs;
    }) << std::endl;

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << end - start << std::endl;

}
