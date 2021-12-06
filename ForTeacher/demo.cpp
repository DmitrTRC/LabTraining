//
// Created by Dmitry Morozov on 03.12.2021.
//
#include <iostream>
#include  <vector>


struct CarInfo {
    int year;
    std::string model;
    std::string color;
    std::string engine;
    std::string transmission;
};

struct CarSalesCard {
    std::string name;
    int price;
    CarInfo car;
    int discount;

    void PrintInfo() {
         for(auto& i : car) {
             std::cout << i << std::endl;
         }
//        std::cout << "Name: " << name << std::endl;
//        std::cout << "Price: " << price << std::endl;
//        std::cout << "Car info: " << std::endl;
//        std::cout << "Year: " << car.year << std::endl;
//        std::cout << "Model: " << car.model << std::endl;
//        std::cout << "Color: " << car.color << std::endl;
//        std::cout << "Engine: " << car.engine << std::endl;
//        std::cout << "Transmission: " << car.transmission << std::endl;
//        std::cout << "Discount: " << discount << std::endl;
        std::cout << std::endl << std::endl;
    }
};

CarInfo car1 = {
        .year = 2020,
        .model = "BMW",
        .color = "Black",
        .engine = "V8",
        .transmission = "Automatic"
};
CarInfo car2 = {
        .year  = 2021,
        .model = "Audi",
        .color = "White",
        .engine = "V6",
        .transmission = "Manual"
};

CarSalesCard card1 = {
        .name = "Luxury sedan ",
        .price = 100000,
        .car = car1,
        .discount = 10
};
CarSalesCard card2 = {
        .name = "Luxury SUV Grate Discount!",
        .price = 200000,
        .car = car2,
        .discount = 20
};

int main() {
    std::vector<CarSalesCard> SaleDB = {card1, card2};
    for (auto card: SaleDB) {
        card.PrintInfo();
    }

}
