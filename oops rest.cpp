#include <iostream>
using namespace std;

// Base class for demonstrating polymorphism
class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

// Derived class for demonstrating polymorphism
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

// Abstract base class with pure virtual function
class AbstractBase {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
    virtual ~AbstractBase() {
        cout << "AbstractBase class destructor called" << endl;
    }
};

// Derived class implementing pure virtual function
class ConcreteDerived : public AbstractBase {
public:
    void pureVirtualFunction() override {
        cout << "ConcreteDerived class implementing pure virtual function" << endl;
    }
    ~ConcreteDerived() {
        cout << "ConcreteDerived class destructor called" << endl;
    }
};

int main() {
    // Demonstrating polymorphism
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->show(); // Calls Derived class show function due to polymorphism

    // Demonstrating pointers to derived classes
    Derived* derivedPtr = new Derived();
    derivedPtr->show(); // Calls Derived class show function
    delete derivedPtr; // Calls Derived class destructor followed by Base class destructor

    // Demonstrating virtual functions
    Base* virtualPtr = new Derived();
    virtualPtr->show(); // Calls Derived class show function due to virtual function
    delete virtualPtr; // Calls Derived class destructor followed by Base class destructor

    // Demonstrating abstract base class and pure virtual functions
    ConcreteDerived concreteObj;
    AbstractBase* abstractPtr = &concreteObj;
    abstractPtr->pureVirtualFunction(); // Calls ConcreteDerived class implementing pure virtual function

    return 0;
}

/*
Explanation:
1Explanation of Topics
Base Class with Virtual Function and Virtual Destructor:

The Base class is defined with a virtual function show and a virtual destructor.
A virtual function allows derived classes to override it, enabling polymorphism.
A virtual destructor ensures that the destructor of the derived class is called when an object is deleted through a base class pointer.

Derived Class Overriding Virtual Function and Destructor:

The Derived class inherits from Base and overrides the show function and destructor.
This demonstrates how derived classes can provide specific implementations for virtual functions.

Polymorphism:

Polymorphism is demonstrated by using a base class pointer to call the derived class's overridden function.
This allows the program to decide at runtime which function to call based on the type of object being pointed to.
Pointers to Derived Classes:

Pointers to derived classes are demonstrated by dynamically allocating a Derived object and calling its function.
This shows how pointers can be used to manage objects dynamically.
Virtual Functions:

Virtual functions are demonstrated by using a base class pointer to call the derived class's overridden function.
This ensures that the correct function is called based on the actual object type, not the pointer type.
Abstract Base Class with Pure Virtual Function:

The AbstractBase class is defined with a pure virtual function pureVirtualFunction, making it an abstract class.
An abstract class cannot be instantiated and serves as a base class for other classes.
Derived Class Implementing Pure Virtual Function:

The ConcreteDerived class inherits from AbstractBase and implements the pure virtual function.
This demonstrates how derived classes must provide implementations for pure virtual functions.
Abstract Base Class and Pure Virtual Functions:

Abstract base class and pure virtual functions are demonstrated by using a pointer to the abstract base class to call the derived class's implementation of the pure virtual function.
This shows how abstract classes can be used to define interfaces that derived classes must implement.
Complete Code with Explanations

*/