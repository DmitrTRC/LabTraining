//
// Created by Dmitry Morozov on 22.12.2021.
//
#include <iostream>
#include <cassert>


class Elevator {
public:
    Elevator (int _maxFloor, int _minFloor, int _currentFloor) { //Your code here
    }

    void moveUp () { //Your code here
    }

    void moveDown () { //Your code here
    }

    void move (int floor) { //Your code here
    }

    int getCurrentFloor () {//Your code here
    }

private:
    int maxFloor;
    int minFloor;
    int currentFloor;
};

//Tests for Elevator class
void test () {
    Elevator elevator (10, 1, 3);

    elevator.move (5);
    std::cout << elevator.getCurrentFloor () << std::endl; // Has to print 5
    assert(elevator.getCurrentFloor () == 5);

    elevator.moveUp ();
    std::cout << elevator.getCurrentFloor () << std::endl; // Has to print 6
    assert(elevator.getCurrentFloor () == 6);

    elevator.moveDown ();
    elevator.moveDown ();
    std::cout << elevator.getCurrentFloor () << std::endl; // Has to print 4
    assert(elevator.getCurrentFloor () == 4);

    elevator.move (3);
    std::cout << elevator.getCurrentFloor () << std::endl; // Has to print 3
    assert(elevator.getCurrentFloor () == 3);

    elevator.move (10);
    std::cout << elevator.getCurrentFloor () << std::endl; // Has to print 10
    assert(elevator.getCurrentFloor () == 10);

    std::cout << "Test passed!" << std::endl;

}

int main () {
    // Just call test() function
    test ();
    return 0;
}

