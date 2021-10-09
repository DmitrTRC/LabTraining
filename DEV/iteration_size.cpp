//
// Created by Dmitry Morozov on 09.10.2021.
//
#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> parseText(const std::string &text_buff) {

    size_t start = 0;
// look for end of sentence
    size_t finish = text_buff.find_first_of(".!?", start);

    while (finish != std::string::npos) {

// end of sentence was found, do something here.

// now find start of next sentence
        start = text_buff.find_first_not_of(" \t\n", finish + 1);
    }
}