//
// Created by Dmitry Morozov on 02.11.2021.
//

#include <iostream>
#include <vector>
#include <array>

int main() {
    std::array arr_year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int array[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<int> year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::cout << arr_year[13];
    for (auto month: year) {
        std::cout << month << std::endl;
    }
    int new_month = 0;
    std::cout << "Enter new month days count -> ";
    std::cin >> new_month;
    year.push_back(new_month);

    for (auto month: year) {
        std::cout << month << std::endl;
    }
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
