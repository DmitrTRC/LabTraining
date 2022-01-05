//
// Created by Dmitry Morozov on 22.12.2021.
//
#include <iostream>
#include <chrono>
#include <thread>
#include <gtest/gtest.h>


class Elevator {
public:
    Elevator (int maxFloor_, int minFloor_, int currentFloor_) : maxFloor (maxFloor_), minFloor (minFloor_),
                                                                 currentFloor (
                                                                         currentFloor_) {  // Mistake!!! Notinitialized

        if (minFloor > maxFloor || currentFloor < minFloor || currentFloor > maxFloor) {
            throw std::invalid_argument ("incorrect value"); // выбрасываем исключение в случае некорректных значений
        }

    }

    void moveUp () {
        if (currentFloor == maxFloor) {
            std::cout << "no more floors above";
        } else {
            currentFloor++;
        }

    }


    void moveDown () {
        if (currentFloor == minFloor) {
            std::cout << "no more floors below";
        } else {
            currentFloor--;
        }
    }

    void move (int floor) {
        if (floor < minFloor || floor > maxFloor) {
            std::cout << "incorrect value";
        }

        if (floor == currentFloor) {
            std::cout << "you on this floor";
        } else {
            _wait_to_move (floor);
            currentFloor = floor;
        }
    }

    [[nodiscard]] int getCurrentFloor () const {
        return currentFloor;
    }

private:
    int maxFloor;
    int minFloor;
    int currentFloor;

    void _wait_to_move (int floor) {
        std::this_thread::sleep_for (std::chrono::milliseconds (1000 * abs (floor - currentFloor)));

    }
};

TEST(Elevator, moveUp) {
    Elevator elevator (10, 1, 1);
    elevator.moveUp ();
    EXPECT_EQ (2, elevator.getCurrentFloor ());
}

TEST(Elevator, moveDown) {
    Elevator elevator (10, 1, 3);
    elevator.moveDown ();
    EXPECT_EQ (2, elevator.getCurrentFloor ());
}

TEST(Elevator, move_time10) {
    Elevator elevator (10, 1, 1);
    elevator.move (10);
    EXPECT_EQ (10, elevator.getCurrentFloor ());
}

TEST(Elevator, move_time1) {
    Elevator elevator (10, 1, 1);
    elevator.move (1);
    EXPECT_EQ (1, elevator.getCurrentFloor ());
}

TEST(Elevator, move_time20) {
    Elevator elevator (150, 1, 1);
    elevator.move (20);
    EXPECT_EQ (20, elevator.getCurrentFloor ());
}

//int main () {
//    Elevator lift (5, 0, 2);
//
//    test ();
//    return 0;
//}


