//
// Created by Dmitry Morozov on 10/10/21.
//

#include <iostream>
#include <string>

struct Phone_Record {
    std::string Name;
    std::string SecondName;
    std::string JobTitle;
    std::string HomeAddress;
    int Number;
};

void PrintContact(const Phone_Record &item) {
    std::cout << item.Name << std::endl;
    std::cout << item.SecondName << std::endl;
    std::cout << item.JobTitle << std::endl;
    std::cout << item.HomeAddress << std::endl;
    std::cout << item.Number << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

int main() {
    int CallBook[3] = {9984444, 602610612, 9310159};

    int i = 1024;
    int *ptr = &i;
    double pi = 3.14;
    double *dbl_ptr = &pi;


    Phone_Record phonebook[3] = {
            {"Dmitry", "Morozov",   "CEO",     "Spain Blanes Jirona 17300 ",             9984444},
            {"Arisha", " Morozova", "Student", "Russia, St. Petersburg Dinamovskaysa 2", 9985555},
            {"Irina",  "Morozova",  "Parent",  "Russia, St. Petersburg Dinamovskaysa 2", 9310159}

    };

//    for (Phone_Record item: phonebook) {
//        std::cout << " Size of record  : " << sizeof(item) << std::endl;
//        Phone_Record *ptr = &item;
//        std::cout << sizeof(ptr) << std::endl;
//        PrintContact(ptr);
//    }
    for (const auto &item: phonebook) { // Автоматически определяемого типа , КОНСТАНТНАЯ ( неизменная ) ссылка на элемент phonebook
        std::cout << sizeof(&item) << std::endl;
        PrintContact(item);
    }

//    std::cout << *dbl_ptr << std::endl;
//    std::cout << " Ptr value : " << ptr << " Value pointed by ptr : " << *ptr << std::endl;
//    for (int y = 0; y < 3; y++) {
//        std::cout << " Phone number : " << y << " = " << CallBook[y] << std::endl;
//        std::cout << CallBook << "    " << CallBook + 1 << std::endl;
//        std::cout << *(CallBook + 1) << std::endl;
//        std::cout << " Size of array element : " << sizeof(CallBook[0]) << std::endl;



}