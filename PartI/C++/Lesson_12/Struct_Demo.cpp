//
// Created by Dmitry Morozov on 03.12.2021.
//
#include <iostream>
#include <vector>

struct CarInfo {
    std::string model;
    std::string brand;
    int year;
    std::string color;
    float engine_volume = 0.0;
    int HP = 0;
    std::string transmission = "Unknown";
};

struct AutoSaleCard {
    std::string sale_name;
    CarInfo car;
    int price = 0;
    int discount = 0;
    std::string devlivery_date = "Unknown";

    void PrintInfo(bool is_full_info = false) {
        std::cout << "Sale name: " << sale_name << std::endl;
        if (is_full_info) {
            std::cout << "Car model: " << car.model << std::endl;
            std::cout << "Car brand: " << car.brand << std::endl;
            std::cout << "Car year: " << car.year << std::endl;
            std::cout << "Car color: " << car.color << std::endl;
            std::cout << "Car engine volume: " << car.engine_volume << std::endl;
            std::cout << "Car HP: " << car.HP << std::endl;
            std::cout << "Car transmission: " << car.transmission << std::endl;
        }
        std::cout << "Car price: " << price << std::endl;
        std::cout << "Car discount: " << discount << std::endl;
        std::cout << "Car devlivery date: " << devlivery_date << std::endl;
        std::cout << "--------------------------------------" << std::endl;
        std::cout << std::endl;
    }
};

std::vector<AutoSaleCard> CreateSalesBase() {
    CarInfo car1, car2, car3;
    car1.model = "X5";
    car1.brand = "BMW";
    car1.year = 2020;
    car1.color = "Black";
    car1.engine_volume = 3.0;
    car1.HP = 300;
    car1.transmission = "Automatic";

    car2.model = "X6";
    car2.brand = "BMW";
    car2.year = 2021;
    car2.color = "White";
    car2.engine_volume = 4.0;
    car2.HP = 400;
    car2.transmission = "Semi-Automatic";

    car3.model = "A6";
    car3.brand = "Audi";
    car3.year = 2020;
    car3.color = "Red";
    car3.engine_volume = 2.0;
    car3.HP = 200;
    car3.transmission = "Manual";

    AutoSaleCard card1, card2, card3;
    card1.sale_name = "new BMW!!! Model";
    card1.car = car1;
    card1.price = 100000;
    card1.discount = 10;
    card1.devlivery_date = "2021-01-01";

    card2.sale_name = "Best discount BMW X6 Model";
    card2.car = car2;
    card2.price = 200000;
    card2.discount = 30;
    card2.devlivery_date = "2021-02-01";

    card3.sale_name = "Audi A6 Model";
    card3.car = car3;
    card3.price = 65000;

    std::vector<AutoSaleCard> sale_base = {card1, card2, card3};
    return sale_base;
};

int main() {
    std::vector<AutoSaleCard> sale_base = CreateSalesBase();

    for (auto card: sale_base) {
        card.PrintInfo(true);
    }
}
