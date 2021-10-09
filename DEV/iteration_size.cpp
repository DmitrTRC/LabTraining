//
// Created by Dmitry Morozov on 09.10.2021.
//
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


std::string ReadTextFile(const std::string &file_name) {
    std::string text_buff;
    std::ifstream fileDescriptor(file_name);
    if (!fileDescriptor) {
        std::cout << std::endl << "Fine " << file_name << " : not found" << std::endl;
    }
    std::string next_string;

    while (getline(fileDescriptor, next_string)) {
        text_buff += next_string;
    }

    fileDescriptor.close();
    return text_buff;
}

std::vector<std::string> parseText(const std::string &text_buff) {
    std::string const delim{".:;!?"};
    std::vector<std::string> res_text;
    size_t begin, pos = 0;

    while ((begin = text_buff.find_first_not_of(delim, pos)) != std::string::npos) {
        pos = text_buff.find_first_of(delim, begin + 1);
        res_text.push_back(text_buff.substr(begin, pos - begin));
    }

    return res_text;
}

int main() {
    auto parsed_text = parseText( ReadTextFile("demo.txt"));
    for( const auto &line : parsed_text ) {
        std::cout << line << std::endl;
    }
}