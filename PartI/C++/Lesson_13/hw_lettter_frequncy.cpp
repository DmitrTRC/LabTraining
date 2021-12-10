//
// Created by Dmitry Morozov on 10.12.2021.
//
#include <map>
#include <iostream>

//Use a map to count the frequency of letters in the input string.
//Only letters should be counted, not blank spaces, numbers, or punctuation.
//Upper case should be considered the same as lower case.
//For example, count_letters("This is a sentence.")
//should return {'t': 2, 'h': 1, 'i': 2, 's': 3, 'a': 1, 'e': 3, 'n': 2, 'c': 1}
std::map<char, int> count_letters(const std::string &str) {
    std::map<char, int> letters;

    for (char c: str) {
        char lower_c = tolower(c);
        if (lower_c >= 'a' && lower_c <= 'z') {
            letters[lower_c]++;
        }
    }
    return letters;
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::map<char, int> letters = count_letters(str);

    for (auto[letter, count]: letters) {

        std::cout << letter << ": " << count << std::endl;
    }
    return 0;
}