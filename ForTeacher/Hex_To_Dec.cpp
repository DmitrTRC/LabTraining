//
// Created by Dmitry Morozov on 06.12.2021.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <bitset>
#include <sstream>

///Checks whether a std::string contains hexadecimal
///can be converted to an int.
///Returns true if possible, also returning this integer by referencing.
///Returns false otherwise, setting the referenced int to zero.
bool IsHexInt(const std::string &s, int &rInt) {
    std::istringstream i(s);
    i >> std::hex;
    if (!(i >> rInt)) {
        rInt = 0;
        return false;
    }
    return true;
}

int main() {
    int x{0};
    while (true) {
        std::string str_x;
        std::cout << "Enter hex number (or 0 to exit ) : ";
        std::cin >> str_x;
        int x;

        if (!IsHexInt(str_x, x)) std::throw_with_nested(std::runtime_error("Not a hex number"));

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
