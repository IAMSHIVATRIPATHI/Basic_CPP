// This is a simple C++ program to demonstrate the concept of classes, public and private access modifiers

#include <iostream>
using namespace std;

// Define a class named 'Car'
class Car {
    // Private members are only accessible within the class
private:
    string brand;
    int year;

    // Public members are accessible from outside the class
public:
    // Constructor to initialize the Car object
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Public method to display car details
    void displayDetails() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }

    // Public method to set the year of the car
    void setYear(int y) {
        year = y;
    }

    // Public method to get the year of the car
    int getYear() {
        return year;
    }
};

int main() {
    // Create an object of the Car class
    Car car1("Toyota", 2015);

    // Access public method to display car details
    car1.displayDetails();

    // Modify the year using public method
    car1.setYear(2020);

    // Access public method to display updated car details
    car1.displayDetails();

    return 0;
}

/*
Explanation:
1. We define a class named 'Car' with private members 'brand' and 'year'.
2. The constructor initializes these private members.
3. Public methods 'displayDetails', 'setYear', and 'getYear' are defined to interact with the private members.
4. In the main function, we create an object 'car1' of the Car class and initialize it with brand "Toyota" and year 2015.
5. We call 'displayDetails' to print the car details.
6. We use 'setYear' to update the year to 2020.
7. Finally, we call 'displayDetails' again to print the updated car details.
*/