//
// Created by Dmitry Morozov on 22.12.2021.
//

#include   <vector>
#include <iostream>


std::vector<int> data = {
        10, 2, 4, 2, 1, 0, -6, -100, 18, 32, 100, 2321
};

// Bubble sort function
void bubbleSort (std::vector<int> &data) {
    int n = data.size ();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main () {
    for (auto c: data) {
        std::cout << c << " ";
    }
    std::cout << "After sorting: " << std::endl;
    bubbleSort (data);
    for (auto c: data) {
        std::cout << c << " ";
    }

}