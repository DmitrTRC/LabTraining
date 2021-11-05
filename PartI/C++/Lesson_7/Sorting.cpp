//
// Created by Dmitry Morozov on 05.11.2021.
//

#include <iostream>
#include <vector>
#include <array>

void bubble_sort(int arr[], int arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        bool already_sorted = true;

        for (size_t j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                already_sorted = false;
            }
        }
        if (already_sorted) break;
    }
}

int main() {


    int classic_array[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::array<int, 12> arr_year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<int> year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (auto &item: year) {
        std::cout << item << " ";
    }
    std::cout << std::endl;


    std::sort(year.begin(), year.end(), [](int lhs, int rhs) { return lhs < rhs; });
    std::sort(arr_year.begin(), arr_year.end(), [](int lhs, int rhs) { return lhs < rhs; });
    bubble_sort(classic_array, sizeof(classic_array) / sizeof(classic_array[0]));

    for (auto &item: classic_array) {
        std::cout << item << " ";
    }
    std::cout << std::endl;


    for (auto &item: year) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    for (auto &item: arr_year) {
        std::cout << item << " ";

    }
    std::cout << std::endl;



//    int new_month = 0;
//    std::cout << "Enter new month days count -> ";
//    std::cin >> new_month;
//    year.push_back(new_month);

//    std::cout << "Enter the month number (1 - 12 ) -> ";
//    int month = 0;
//    std::cin >> month;
//    if (month >= 1 and month <= 12) {
//        std::cout << "In month " << month << "  " << year.at(month - 1) << std::endl;
//    } else {
//        std::cout << "Wrong month number !";
//    }
//    if (month >= 1 and month <= 12) {
//        std::cout << "In month " << month << "  " << array[month - 1] << std::endl;
//    } else {
//        std::cout << "Wrong month number !";
//    }
}
