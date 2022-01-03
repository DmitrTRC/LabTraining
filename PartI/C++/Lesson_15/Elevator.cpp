//
// Created by Dmitry Morozov on 22.12.2021.
//
#include <iostream>
#include <cassert>


class Elevator {
public:
    Elevator (int maxFloor, int minFloor, int currentFloor) { 
        if (minFloor>maxFloor ||maxFloor<minFloor){
            std::cout<<"incorrect value";
        }
    }

    void moveUp () {
        if (currentFloor == maxFloor){
        std::cout<<"no more floors above";
        }

            else {
                currentFloor++;
            }
        
            
    }
        
    

    void moveDown (){
        if (currentFloor == minFloor){
            std::cout<<"no more floors below";
            }

            else{
                currentFloor--;
            }


    }
    

    void move (int floor) { 
        if (floor<minFloor || floor>maxFloor){
            std::cout<<"incorrect value";
        }

        if (floor==currentFloor){
            std::cout<<"you on this floor";
            }
            
            else {
                currentFloor=floor;
            }


        

    }

    int getCurrentFloor () {
        std::cout<<currentFloor;
    }

private:
    int maxFloor;
    int minFloor;
    int currentFloor;
};

int main(){
    Elevator lift(5,0,2);
}


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

 ,
