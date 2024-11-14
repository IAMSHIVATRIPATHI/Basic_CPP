#include <iostream>
using namespace std;

class Y; // Forward declaration of class Y

class X {
    int data;
public:
    void setValue(int value) {
        data = value;
    }
    friend void add(X, Y); // Friend function declaration
};

class Y {
    int num;
public:
    void setValue(int value) {
        num = value;
    }
    friend void add(X, Y); // Friend function declaration
};

// Definition of friend function
void add(X o1, Y o2) {
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main() {
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1); // Calling friend function
    return 0;
}

/*
Explanation:
1. Class Y is forward declared to inform the compiler about its existence.
2. Class X is defined with a private data member 'data' and a public method 'setValue' to set its value.
3. Class Y is defined with a private data member 'num' and a public method 'setValue' to set its value.
4. Both classes declare 'add' as a friend function, allowing it to access their private members.
5. The friend function 'add' is defined to sum the private members of objects of classes X and Y.
6. In the main function, objects 'a1' and 'b1' of classes X and Y are created, their values are set, and the friend function 'add' is called to print the sum.
*/
/*#include <iostream>
using namespace std;

class c2; // Forward declaration of class c2

class c1 {
    int val1;
    friend void exchange(c1 &, c2 &); // Friend function declaration
public:
    void indata(int a) {
        val1 = a;
    }
    void display(void) {
        cout << val1 << endl;
    }
};

class c2 {
    int val2;
    friend void exchange(c1 &, c2 &); // Friend function declaration
public:
    void indata(int a) {
        val2 = a;
    }
    void display(void) {
        cout << val2 << endl;
    }
};

// Definition of friend function
void exchange(c1 &x, c2 &y) {
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main() {
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2); // Calling friend function

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}

Friend Classes & Member Friend Functions in C++ | C++ Tutorials for Beginners #27

In this tutorial, we will discuss friend classes and member friend functions in C++
Member Friend Functions in C++

Friend functions are those functions that have the access to private members of the class in which they are declared. The main thing to note here is that only that function can access the member function which is made a friend of the other class. An example of the friend function is shown below.

class Complex
{
    int a, b;
    // Individually declaring functions as friends
     friend int Calculator ::sumRealComplex(Complex, Complex);
     friend int Calculator ::sumCompComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;a
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

Code Snippet 1: Friend function example

As shown in a code snippet 1, a complex class is created which consists of two friend functions “sumRealComplex” and “sumCompComplex” of the calculator class. The main thing to note here is that “sumRealComplex” and “sumCompComplex” are the friend functions of complex class so they can access all the private members of the complex class.

Friend Classes in C++

Friend classes are those classes that have permission to access private members of the class in which they are declared. The main thing to note here is that if the class is made friend of another class then it can access all the private members of that class. An example program to demonstrate friend classes in C++ is shown below.

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

Code Snippet 2: Calculator Class

As shown in code snippet 2, a complex class is declared at the top which is known as forward declaration. Forward declaration hints to the compiler that this class is declared somewhere forward in the code. After that calculator class is defined this consists of three public member functions, “add”, “sumRealComplex”, and “sumCompComplex”. The “add” function will add the values of “a” and “b” and return the value. The “sumRealComplex” and “sumCompComplex” are taking two objects of the complex class. The code for the complex class is shown below.

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;a
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

Code Snippet 3: Complex Class

As shown in code snippet 3, a complex class is defined which consists of, two private data members “a” and “b”, and two public member functions “setNumber” and “printNumber”. The function “setNumber” will assign the values to the variables “a” and “b”. The function “printNumber” will print the values of the variables “a” and “b”. Two functions “sumRealComplex” and “sumCompComplex” are defined at the end. The function “sumRealComplex” will add the real values and the function “sumCompComplex” will add the complex value. The main program is shown below.

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}

Code snippet 4: Main Program

As shown in code snippet 4, 1st two objects “o1” and “o2” of the “complex” data type are declared. 2nd “setNumber” function is called with the “o1” and “o2” objects and the values are passed. 3rd object “calc” of the calculator data type is declared. 4th “sumRealComplex” function is called by the “calc” object and the object “o1” and “o2” are passed to it. 5th “sumCompComplex” function is called by the “calc” object and the object “o1” and “o2” are passed to it. The output of the following program is shown in figure 1.



/*
Explanation:
1. Class c2 is forward declared to inform the compiler about its existence.
2. Class c1 is defined with a private data member 'val1' and a public method 'indata' to set its value, and 'display' to print its value.
3. Class c2 is defined with a private data member 'val2' and a public method 'indata' to set its value, and 'display' to print its value.
4. Both classes declare 'exchange' as a friend function, allowing it to access their private members.
5. The friend function 'exchange' is defined to swap the private members of objects of classes c1 and c2.
6. In the main function, objects 'oc1' and 'oc2' of classes c1 and c2 are created, their values are set, and the friend function 'exchange' is called to swap their values.
7. The 'display' method is called to print the swapped values.
*/
