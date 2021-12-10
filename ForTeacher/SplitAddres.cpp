//
// Created by Dmitry Morozov on 10.12.2021.
//

#include <iostream>

std::string format_address(const std::string &address) {
//    The format_address function separates out parts of the address string into new strings: house_number and street_name,
//    and returns: "house number X on street named Y".
//        The format of the input string is: numeric house number, followed by the street name which may contain numbers,
//    but never by themselves, and could be several words long.
//    For example, "123 Main Street", "1001 1st Ave", or "55 North Center Drive".

    std::string house_number;
    std::string street_name;

    size_t pos = address.find(' ');
    house_number = address.substr(0, pos);
    street_name = address.substr(pos + 1);

    return "house number " + house_number + " on street named " + street_name;
}


int main() {
    std::string address = "123 Main Street";
    std::cout << format_address(address) << std::endl;
    return 0;
}

