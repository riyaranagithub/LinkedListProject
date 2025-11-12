#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;

    void drive() {
        cout << brand << " is driving." << endl;
    }
};

int main() {
    // No memory for class yet
    Car car1;               // Memory allocated for object car1
    car1.brand = "Toyota";
    car1.color = "Red";

    Car car2;               // Memory allocated for another object car2
    car2.brand = "BMW";
    car2.color = "Blue";

    car1.drive();
    car2.drive();

    return 0;
}
