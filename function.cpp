#include <iostream>
using namespace std;

// Function Prototype
int sum(int a, int b); // Declaration of the function

// Function Definition
int sum(int a, int b) {
    return a + b; // Function body
}

// Function to demonstrate Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to demonstrate Call by Pointer
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to demonstrate Call by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function with Default Arguments
int add(int a, int b = 10) {
    return a + b;
}

// Function with Constant Arguments
int multiply(const int a, int b) {
    return a * b;
}

// Recursive Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

// Function Overloading
int sum(int a, int b, int c) {
    return a + b + c;
}

float sum(float a, float b) {
    return a + b;
}

int main() {
    // Function Call
    int result = sum(5, 3); // Calling the function
    cout << "Sum: " << result << endl;

    // Call by Value
    int x = 5, y = 6;
    cout << "Before swap (Call by Value): x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swap (Call by Value): x = " << x << ", y = " << y << endl;

    // Call by Pointer
    cout << "Before swap (Call by Pointer): x = " << x << ", y = " << y << endl;
    swapByPointer(&x, &y);
    cout << "After swap (Call by Pointer): x = " << x << ", y = " << y << endl;

    // Call by Reference
    cout << "Before swap (Call by Reference): x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swap (Call by Reference): x = " << x << ", y = " << y << endl;

    // Default Arguments
    cout << "Add with default argument: " << add(5) << endl;
    cout << "Add without default argument: " << add(5, 15) << endl;

    // Constant Arguments
    cout << "Multiply: " << multiply(5, 3) << endl;

    // Recursion
    cout << "Factorial of 5: " << factorial(5) << endl;

    // Function Overloading
    cout << "Sum (int, int, int): " << sum(1, 2, 3) << endl;
    cout << "Sum (float, float): " << sum(1.5f, 2.5f) << endl;

    return 0;
}