#include <iostream>
using namespace std;

// Structures in C++
// A structure is a user-defined data type that allows us to combine different types of data types.
// It is used to group related data of different types together.

struct employee {
    int eId;       // Employee ID
    char favChar;  // Favorite character
    int salary;    // Salary
};

int main() {
    // Creating an instance of the structure 'employee'
    struct employee Shiva; // Changed from shiva to Shiva
    // Accessing and assigning values to the structure members
    Shiva.eId = 1;
    Shiva.favChar = 'c';
    Shiva.salary = 120000000;

    // Printing the values of the structure members
    cout << "eID of Shiva is " << Shiva.eId << endl;
    cout << "favChar of Shiva is " << Shiva.favChar << endl;
    cout << "salary of Shiva is " << Shiva.salary << endl;

    // Using typedef with structures
    // 'typedef' allows us to create an alias for the structure type
    typedef struct employee {
        int eId;       // Employee ID
        char favChar;  // Favorite character
        float salary;  // Salary
    } ep;

    // Creating instances of the structure using the alias 'ep'
    ep shiva;
    shiva.eId = 1;
    shiva.favChar = 'c';
    shiva.salary = 120000000;

    cout << "The value is " << shiva.eId << endl;
    cout << "The value is " << shiva.favChar << endl;
    cout << "The value is " << shiva.salary << endl;

    // Unions in C++
    // Unions are similar to structures but provide better memory management.
    // Unions use shared memory, so only one variable can be used at a time.
    union money {
        int rice;    // 4 bytes
        char car;    // 1 byte
        float pounds; // 4 bytes
    };

    // Creating an instance of the union 'money'
    union money m;
    m.rice = 34;
    cout << "Value of rice: " << m.rice << endl;

    // Note: Using another member of the union will overwrite the previous value
    m.car = 'c';
    cout << "Value of car: " << m.car << endl;

    // Enums in C++
    // Enums are user-defined types that consist of named constants.
    // Enums are used to make the program more readable.
    enum Meal { breakfast, lunch, dinner };

    // Creating an instance of the enum 'Meal'
    Meal meal = lunch;
    cout << "Value of meal (lunch): " << static_cast<int>(meal) << endl; // Output: 1 (index of lunch)

    // Comparing enum values
    cout << "Is meal equal to dinner? " << (meal == dinner) << endl; // Output: 0 (false)

    return 0;
}


