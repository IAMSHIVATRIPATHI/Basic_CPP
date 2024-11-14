#include<iostream>
using namespace std;    

// Global variables
int a = 5; // global variable
int c = 45; // another global variable

// Function definition
void func()
{
    // This will print the global variable 'a' because there is no local variable 'a' in this scope
    cout << a << endl;
}

int main()
{
    // Local variable 'a' shadows the global variable 'a'
    int a = 10; // local variable
    cout << a << endl; // prints the local variable 'a', which is 10
    func(); // calls the function 'func', which prints the global variable 'a', which is 5
    
    // Constant variable
    const float PI = 3.14;
    cout << "The value of PI is " << PI << endl;
    // PI = 3.00; // error, since changing a const variable is not allowed.

    // Built-in Data types
    int b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a; // takes input for the local variable 'a'
    cout << "Enter the value of b:" << endl;
    cin >> b; // takes input for 'b'
    c = a + b; // calculates the sum of 'a' and 'b'
    cout << "The sum is " << c << endl; // prints the sum
    cout << "The global c is " << ::c << endl; // prints the global variable 'c' using the scope resolution operator

    // Float, double and long double Literals
    float d = 34.4F; // 'F' suffix makes it a float literal
    long double e = 34.4L; // 'L' suffix makes it a long double literal
    cout << "The size of 34.4 is " << sizeof(34.4) << endl; // double literal by default
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl; // float literal
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl; // float literal
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl; // long double literal
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl; // long double literal
    cout << "The value of d is " << d << endl << "The value of e is " << e << endl; // prints the values of 'd' and 'e'

    // Reference Variables
    float x = 455; // variable 'x'
    float & y = x; // 'y' is a reference to 'x'
    cout << x << endl; // prints the value of 'x'
    cout << y << endl; // prints the value of 'y', which is the same as 'x'

    // Typecasting
    a = 45; // assigns 45 to the local variable 'a'
    float b = 45.46; // assigns 45.46 to 'b'
    cout << "The value of a is " << (float)a << endl; // typecasts 'a' to float and prints it
    cout << "The value of a is " << float(a) << endl; // another way to typecast 'a' to float and print it

    cout << "The value of b is " << (int)b << endl; // typecasts 'b' to int and prints it
    cout << "The value of b is " << int(b) << endl; // another way to typecast 'b' to int and print it
    int c = int(b); // typecasts 'b' to int and assigns it to 'c'

    cout << "The expression is " << a + b << endl; // prints the result of adding 'a' and 'b'
    cout << "The expression is " << a + int(b) << endl; // typecasts 'b' to int and adds it to 'a', then prints the result
    cout << "The expression is " << a + (int)b << endl; // another way to typecast 'b' to int and add it to 'a', then print the result

    return 0; // returns 0 to indicate successful execution
}
