//
// Created by Dmitry Morozov on 21.12.2021.
//
#include <iostream>


class Coordinate {
private:
    int x;
    int y;

public:
    Coordinate (int x, int y) { // Python class  Demo:
        // def __init__(self, x, y):
        // self.x = x
        // self.y = y
        this->x = x;
        this->y = y;
    }

    void set_coordinate (int x, int y) {
        this->x = x;
        this->y = y;
    }

    void print_coord () {
        std::cout << "x = " << x << " y = " << y << std::endl;
    }
};

int main () {
    Coordinate c1 (1, 2);
    c1.print_coord ();
    c1.set_coordinate (10, 20);
    c1.print_coord ();
}