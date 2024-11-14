/*
Explanation
Pointers in C++
A pointer is a data type that holds the address of another data type. Pointers are declared using the * (asterisk) operator. The & (ampersand) operator is used to get the address of a variable, and the * operator is used to get the value at a given address.

Example Program
Basic Pointer Operations:

Declare an integer variable a and initialize it with the value 3.
Declare an integer pointer b and assign it the address of a using the & operator.
Print the address of a using both &a and b.
Print the value at the address stored in b using the * operator.
Pointer to Pointer:

Declare a pointer to pointer c and assign it the address of pointer b.
Print the address of b using both &b and c.
Print the value at the address stored in c using the * operator.
Dereference c twice to get the value of a.
Arrays and Pointers:

Declare and initialize an array marks.
Assign the address of the first element of the array to pointer p.
Print the values of the array elements using pointer arithmetic.
This code demonstrates the basic concepts of pointers, pointer to pointer, and the relationship between arrays and pointers in C++.
*/

#include <iostream>
using namespace std;

int main() {
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3; // Initialize an integer variable 'a' with the value 3
    int* b; // Declare an integer pointer 'b'
    b = &a; // Assign the address of 'a' to the pointer 'b'

    // & ---> (Address of) Operator
    cout << "The address of a is " << &a << endl; // Print the address of 'a' using the address of operator '&'
    cout << "The address of a is " << b << endl; // Print the address stored in pointer 'b', which is the address of 'a'

    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl; // Print the value at the address stored in 'b', which is the value of 'a'

    // Pointer to pointer
    int** c = &b; // Declare a pointer to pointer 'c' and assign it the address of pointer 'b'
    cout << "The address of b is " << &b << endl; // Print the address of pointer 'b'
    cout << "The address of b is " << c << endl; // Print the address stored in pointer to pointer 'c', which is the address of 'b'
    cout << "The value at address c is " << *c << endl; // Print the value at the address stored in 'c', which is the address of 'a'
    cout << "The value at address value_at(value_at(c)) is " << **c << endl; // Dereference 'c' twice to get the value of 'a'

    // Arrays and Pointers
    int marks[] = {99, 100, 38}; // Declare and initialize an array 'marks'
    int* p = marks; // Assign the address of the first element of the array to pointer 'p'
    cout << "The value of marks[0] is " << *p << endl; // Print the value of the first element of the array using pointer 'p'
    cout << "The value of marks[1] is " << *(p + 1) << endl; // Print the value of the second element of the array using pointer arithmetic
    cout << "The value of marks[2] is " << *(p + 2) << endl; // Print the value of the third element of the array using pointer arithmetic

    return 0;
}