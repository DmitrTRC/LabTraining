//
// Created by Dmitry Morozov on 21.12.2021.
//
#include <iostream>


class Coordinate {
private:
    int x;
    int y;

public:
    Coordinate (int _x,
                int _y) {  // Конструктор  id we using the same variable name to resolve which "x" we use this->x or change parameter name to _x or something else

        x = _x;
        y = _y;
    }

    void set_coordinate (int _x, int _y) {
        x = _x;
        y = _y;
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