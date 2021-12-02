//
// Created by Dmitry Morozov on 26.11.2021.
//

//
// Created by Dmitry Morozov on 26.11.2021.
//
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <chrono>

using namespace std;


//AND  1 1 1
//     1 0 0
//     0 1 0
//     0 0 0

//OR   1 1 1
//        1 0 1
//        0 1 1
//        0 0 0

//XOR
//        1 1 0
//        1 0 1
//        0 1 1
//        0 0 0


void get_uniq_fast(std::vector<int> arr) {
    std :: cout << std::accumulate(arr.begin(), arr.end(), 0, [](int lhs, int rhs){
        return lhs ^ rhs ;
    })<< std::endl; //O(n)
}

void get_uniq(std::vector<int> arr) {
    std::map<int, int> result;

    for (int number  : arr) {
        result[number]++;
    }
    for (auto[key, val]: result) {
        std::cout << key << " : " << val << std::endl;
        if (val == 1) { std::cout << "Uniq number is : " << key << std::endl; }
    }

}


int main() {
    vector<int> n = {1, 3, 6, 6, 7, 7, 2, 2, 9, 3, 9, 8, 8, 5, 4, 4, 0, 0, 1};

    auto start = std::chrono::high_resolution_clock::now();
    get_uniq_fast(n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::microseconds>(finish - start);

    std::cout << duration.count()  << " ms" << std::endl;

    get_uniq(n);
//
//    sort(n.begin(), n.end()); // TimSort O(n)
//
//    for (int i = 0; i < n.size(); i++) { // logn
//        if ((n[i] != n[i - 1] and i != 0) and (n[i] != n[i + 1] and i != n.size() - 1))
//            std::cout << n[i] << std::endl;
//    }
//}
// O(nlogn)
}