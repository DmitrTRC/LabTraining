//
// Created by Dmitry Morozov on 03.01.2022.
//
#include <iostream>


struct Student {
    int age;
    char name[20];
    char surname[20];
    char patronymic[20];
    char address[20];
    char phone[20];
    char email[20];
    char group[20];
    char faculty[20];
    char university[20];

    friend std::ostream &operator<< (std::ostream &out, const Student &student) {
        out << "Student: " << std::endl;
        out << "Name: " << student.name << std::endl;
        out << "Surname: " << student.surname << std::endl;
        out << "Patronymic: " << student.patronymic << std::endl;
        out << "Age: " << student.age << std::endl;
        out << "Address: " << student.address << std::endl;
        out << "Phone: " << student.phone << std::endl;
        out << "Email: " << student.email << std::endl;
        out << "Group: " << student.group << std::endl;
        out << "Faculty: " << student.faculty << std::endl;
        out << "University: " << student.university << std::endl;
        return out;

    };
};

int main () {
    Student student = {
            20,
            "Dmitry",
            "Morozov",
            "Ivanovich",
            "Moscow",
            "8-926-867-67-67",
            "morozovd@me.com",
            "K-17",
            "KPI",
            "SPGUPS"
    };

    std::cout << student;

    return 0;
}