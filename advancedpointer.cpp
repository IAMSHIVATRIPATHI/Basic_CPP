#include <iostream>
using namespace std;

// Class to demonstrate pointers to objects and arrow operator
class Example {
    int value;
public:
    Example(int v) : value(v) {
        cout << "Constructor called, value = " << value << endl;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
    // Method to demonstrate 'this' pointer
    void setValue(int value) {
        this->value = value;
    }
    int getValue() {
        return value;
    }
    ~Example() {
        cout << "Destructor called, value = " << value << endl;
    }
};

int main() {
    // Demonstrating new and delete keywords
    Example* ptr = new Example(10); // Dynamically allocating memory for an object
    ptr->display(); // Using arrow operator to access member function
    delete ptr; // Deleting the dynamically allocated object

    // Demonstrating array of objects using pointers
    Example* arr = new Example[3] {Example(1), Example(2), Example(3)}; // Dynamically allocating array of objects
    for (int i = 0; i < 3; ++i) {
        arr[i].display(); // Accessing array elements using pointer
    }
    delete[] arr; // Deleting the dynamically allocated array

    // Demonstrating 'this' pointer
    Example obj(20);
    obj.setValue(30); // Using 'this' pointer inside setValue method
    cout << "Value after using 'this' pointer: " << obj.getValue() << endl;

    return 0;
}

/*
Explanation:
1. The 'Example' class is defined with a constructor, a destructor, and methods to set and get the value of the private data member 'value'.
2. In the main function:
   - The 'new' keyword is used to dynamically allocate memory for an object of the 'Example' class. The 'delete' keyword is used to free the allocated memory.
   - The arrow operator (->) is used to access the member function of the object pointed to by the pointer.
   - An array of objects is dynamically allocated using the 'new' keyword, and the elements are accessed using the pointer.
   - The 'delete[]' keyword is used to free the dynamically allocated array.
   - The 'this' pointer is demonstrated in the 'setValue' method to refer to the calling object.
*/