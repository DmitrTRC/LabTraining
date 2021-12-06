//
// Created by Dmitry Morozov on 06.12.2021.
//

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int x{0};
    while (true) {
        std::cout << "Enter hex number (or 0 to exit ) : ";
        std::cin >> std::hex >> x;
        if (not x) break;
        std::cout << std::dec << x << std::endl;
        std::bitset<32> bin_x(x);
        std::cout << bin_x << std::endl;
        std::string bin_x_str = bin_x.to_string();
        std::cout << bin_x_str.erase(0, bin_x_str.find_first_not_of('0')) << std::endl;

        std::string bin_string;
        std::cout << "Enter binary number: ";
        std::cin >> bin_string;
        std::cout << std::hex << std::stoi(bin_string, nullptr, 2) << std::endl;
        std::cout << std::dec << std::stoi(bin_string, nullptr, 2) << std::endl;

    }
    return 0;

};
