//
// Created by Dmitry Morozov on 08.12.2021.
//

#include <iostream>

class Elevator {
public:
    Elevator(int minFloor, int maxFloor, int currentFloor) : minFloor(minFloor), maxFloor(maxFloor),
                                                             currentFloor(currentFloor) {
        if (currentFloor < minFloor || currentFloor > maxFloor) {
            throw std::invalid_argument("Invalid current floor");
        }

        if (minFloor > maxFloor) {
            throw std::invalid_argument("Invalid min and max floor");
        }
    }

    void move(int floor) {
        if (floor > maxFloor || floor < minFloor) {
            std::cout << "Invalid floor" << std::endl;
            return;
        }

        if (floor == currentFloor) {
            std::cout << "Already on this floor" << std::endl;
            return;
        }

        if (floor > currentFloor) {
            std::cout << "Going up to " << floor << " floor" << std::endl;
        } else {
            std::cout << "Going down to " << floor << " floor" << std::endl;
        }

        currentFloor = floor;
    }

    void move_up() {
        if (currentFloor == maxFloor) {
            std::cout << "Already on the top floor" << std::endl;
            return;
        }

        std::cout << "Going up" << std::endl;
        currentFloor++;
    }

    void move_down() {
        if (currentFloor == minFloor) {
            std::cout << "Already on the bottom floor" << std::endl;
            return;
        }

        std::cout << "Going down" << std::endl;
        currentFloor--;
    }

    int getCurrentFloor() {
        return currentFloor;
    }

    int minFloor;
    int maxFloor{0};
    int currentFloor{0};
};


int main() {
    Elevator elevator(-1, 10, 3);
    elevator.move(-1);
    std::cout << "Current floor: " << elevator.getCurrentFloor() << std::endl;
}