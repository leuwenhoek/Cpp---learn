#include <iostream>
using namespace std;

class Car {
public:
    // Parameterized Constructor
    Car(string model, int year) {
        cout << "Model: " << model << ", Year: " << year << endl;
    }

    // Delegating Constructor
    Car() : Car("Default Model", 2023) {
        cout << "Default constructor called!" << endl;
    }
};

int main() {
    Car c1; // Default Constructor ko call karega
    Car c2("Tesla", 2022); // Parameterized Constructor ko call karega
    return 0;
}
