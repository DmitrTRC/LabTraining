//
// Created by Dmitry Morozov on 05.11.2021.
//

template<std::size_t SIZE>
void printArray(std::array<int, SIZE> &arr) {
    for (auto &item: arr) {
        std::cout << item << std::endl;
    }
}