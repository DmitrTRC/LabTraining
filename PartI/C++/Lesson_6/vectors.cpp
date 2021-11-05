//
// Created by Dmitry Morozov on 02.11.2021.
//

#include <iostream>
#include <vector>
#include <array>





int main() {

    std::array<int, 12> arr_year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int array[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<int> year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (auto &item: array) {
        std::cout << item << " ";
    }
    std::cout << std::endl;



    for (auto &item: array) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

//    printArray(arr_year);
//
//
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
