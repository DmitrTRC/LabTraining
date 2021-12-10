//
// Created by Dmitry Morozov on 10.12.2021.
//
#include <iostream>
#include <map>

//Use a map to count the frequency of letters in the input string.
//Only letters should be counted, not blank spaces, numbers, or punctuation.
//Upper case should be considered the same as lower case.
//For example, count_letters("This is a sentence.")
//should return {'t': 2, 'h': 1, 'i': 2, 's': 3, 'a': 1, 'e': 3, 'n': 2, 'c': 1}
std::map <char, int> char_frequency(std::string str) {
    std::map <char, int> result;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            result[str[i]]++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            result[str[i] + 32]++;
        }
    }
    return result;
}


