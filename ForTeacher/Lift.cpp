//
// Created by Dmitry Morozov on 22.12.2021.
//
#include <vector>
#include <iostream>


std::vector<int> vec = {1, 2, 3, 4, 5};

int sum_vec (std::vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size (); i++) {
        sum += vec[i];
    }
    return sum;
}

int random_number (int min_value, int max_value) {
    auto result = rand () % (max_value - min_value) + min_value;
    return  result;
}

class Dice {
public:
    Dice (int _min_value, int _max_value) {
        min_value = _min_value;
        max_value = _max_value;

        value = random_number (min_value, max_value);
        }

    void roll () {
        value = random_number (min_value, max_value);
    }

    int get_value () {
        return value;
    }

private:
    int value;
    int min_value;
    int max_value;
};


int main () {
    auto  dice1 = Dice (1, 6);
    auto dice2 = Dice (1, 6);
    for (int i = 1; i <= 10; i++) {
        dice1.roll ();
        dice2.roll ();
        std::cout << "Roll number : " << i << " -     ˚ " <<  dice1.get_value () << " : " << dice2.get_value () << std::endl;
    }
}

