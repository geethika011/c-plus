#include <iostream>
using namespace std;

class Vehicle {
public:
    string model;
    int year;
    double price;

    void display() {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Vehicle car;
    car.model = "Toyota Camry";
    car.year = 2020;
    car.price = 24000;
    car.display();
    return 0;
}
