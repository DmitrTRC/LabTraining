//
// Created by Dmitry Morozov on 10.12.2021.
//
#include <iostream>
#include <sstream>

bool IsHexInt(std::string str, long long& n){
    std::istringstream iss(str);
    if (  not (iss >> std::hex >> n)){
        n = 0;
        return false;
    }
    return true;
}

int main(){
    long long x{0};

    std::string str;
    std::cout << "Enter hexadecimal number: ";
    std::cin >> str;
    std:: cout << std::dec << std::stoi(str, nullptr, 16) << std::endl;

    if ( not  IsHexInt(str, x)){
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    std::cout << "Decimal number: " << x << std::endl;
    std::bitset<64> b(x);
    std::cout << "Binary number: " << b << std::endl;
    std::string bin_str = b.to_string();
    std::cout << "Binary number: " << bin_str.erase(0,bin_str.find_first_not_of('0')) << std::endl;

    std::cout << "Enter binary number: ";
    std::cin >> str;
    std::cout << std::hex << std::stoi(str, nullptr, 2) << std::endl;
    std::cout << std::dec << std::stoll(str, nullptr, 2) << std::endl;
}