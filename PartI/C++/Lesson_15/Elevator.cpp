//
// Created by Dmitry Morozov on 22.12.2021.
//
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

    void showFloor () {//Your code here
    }

private:
    int maxFloor;
    int minFloor;
    int currentFloor;
};

int main () {
    Elevator elevator (10, 1, 1);
    elevator.move (5);
    elevator.showFloor ();
    elevator.moveUp ();
    elevator.showFloor ();
    elevator.moveDown ();
    elevator.moveDown ();
    elevator.showFloor ();
    elevator.move (3);
    elevator.showFloor ();

    return 0;
}
