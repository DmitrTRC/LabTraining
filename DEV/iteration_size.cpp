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
    std::string textLine;

    while (getline(fileDescriptor, textLine)) {
        text_buff += textLine;
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
    auto parsed_text = parseText(ReadTextFile("demo.txt"));
    unsigned long address_counter = 0;
    unsigned long value_counter = 0;

    for (const auto &line: parsed_text) {
        address_counter += sizeof(&line);
        value_counter += line.size() * sizeof(char);
        std::cout << "Size of line ( address ) : " << sizeof(&line) << std::endl;
        std::cout << "Size of line ( address ) : " << sizeof(char) * line.size() << std::endl;
        std::cout << line << std::endl;
    }
    std::cout << "==============================================================\n";
    std::cout << "Total bytes when passed by reference : " << address_counter << "  Total bytes when passed by value : "
              << value_counter << std::endl;

}