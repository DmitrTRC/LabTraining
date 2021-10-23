//
// Created by Dmitriy Morozov on 23.10.2021.
//

#include <iostream>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "ERROR: You need at least one argument.\n";
        return -1;
    }

    for (char **pargv = argv + 1; *pargv != argv[argc]; pargv++) {
        std::cout << "Vowels in string  : ", *pargv;
        for (char *ptr = *pargv; *ptr != '\0'; ptr++) {
            if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'
                || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
                std::cout << *ptr;
            }
        }
        printf("\n");
    }
}