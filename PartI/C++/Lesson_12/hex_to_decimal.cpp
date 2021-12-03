//
// Created by Dmitry Morozov on 03.12.2021.
//
#include <iostream>
#include <cmath>

int covert_hex_to_decimal(std::string hex_number) {
    int decimal_number = 0;
    int power = 0;
    for (int i = hex_number.length() - 1; i >= 0; i--) {
        int digit = 0;
        if (hex_number[i] >= '0' && hex_number[i] <= '9') {
            digit = hex_number[i] - '0';
        } else if (hex_number[i] >= 'A' && hex_number[i] <= 'F') {
            digit = hex_number[i] - 'A' + 10;
        } else if (hex_number[i] >= 'a' && hex_number[i] <= 'f') {
            digit = hex_number[i] - 'a' + 10;
        }
        decimal_number += digit * pow(16, power);
        power++;
    }
    return decimal_number;
}


int main() {
    std::string hex_number;
    std::cout << "Enter hex number: ";
    std::cin >> hex_number;
    std::cout << "Decimal number: " << covert_hex_to_decimal(hex_number) << std::endl;
    return 0;
}
