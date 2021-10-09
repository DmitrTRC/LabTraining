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

//std::vector<std::string> parseText(const std::string &text_buff) {
//
//    size_t start = 0;
//// look for end of sentence
//    size_t finish = text_buff.find_first_of(".!?", start);
//
//    while (finish != std::string::npos) {
//
//// end of sentence was found, do something here.
//
//// now find start of next sentence
//        start = text_buff.find_first_not_of(" \t\n", finish + 1);
//    }
//}
int main(){
     std:: cout << ReadTextFile ("demo.txt");
}