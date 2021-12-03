//
// Created by Dmitry Morozov on 03.12.2021.
//

// User
// Name: John
// Last Name: Smith
// Age: 25
// email: demo@me.com
// Address: Spb, Lenina st. 39
// Password: 12345
#include <iostream>


struct UserInfo {
    std::string Name = "Unknown";
    std::string Lastname = "Unknown";
    unsigned int Age = 0;
    std::string Email = "Unknown";
    std::string Address = "Unknown";
    std::string Password = "user";

    void PrintUserInfo() {
        std::cout << "User: " << Name << " " << Lastname << std::endl;
        std::cout << "Age: " << Age << std::endl;
        std::cout << "Email: " << Email << std::endl;
        std::cout << "Address: " << Address << std::endl;
        std::cout << "Password: " << "**********" << std::endl;
    }
};


int main() {

    UserInfo user, user1;

    user.Name = "Dmitry";
    user.Lastname = "Morozov";
    user.Age = 46;
    user.Email = "morozovd@me.com";
    user.Password = "developer";

    user1.Name = "John";
    user1.Age = 25;
    user1.Email = "9984398@gmail.com";

    user.PrintUserInfo();
    std::cout << std::endl << std::endl;
    user1.PrintUserInfo();

    return 0;
}