//
// Created by Dmitry Morozov on 22/10/21.
//

#include <iostream>
#include <cmath>
#include <string>

#define PI 3.14

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Wrong arguments number ! ";
        return -1;
    }

    if (atoi(argv[1]) < 16) {
        std::cout << "You are too young try again later ! ";
    } else {
        std::cout << "Arguments number : " << argc << std::endl;
        for (int i = 0; i < argc; i++) {
            std::cout << i + 1 << ")" << " " << argv[i] << std::endl;
        }
    }    return 0;
}

