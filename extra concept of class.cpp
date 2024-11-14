#include <iostream>
using namespace std;

// Base class for demonstrating inheritance
class Base {
public:
    int baseValue;
    Base() {
        baseValue = 0;
        cout << "Base class constructor called" << endl;
    }
    void displayBase() {
        cout << "Base class value: " << baseValue << endl;
    }
};

// Derived class for single inheritance
class DerivedSingle : public Base {
public:
    int derivedValue;
    DerivedSingle() {
        derivedValue = 0;
        cout << "DerivedSingle class constructor called" << endl;
    }
    void displayDerivedSingle() {
        cout << "DerivedSingle class value: " << derivedValue << endl;
    }
};

// Class to demonstrate protected access modifier
class ProtectedBase {
protected:
    int protectedValue;
public:
    ProtectedBase() {
        protectedValue = 0;
        cout << "ProtectedBase class constructor called" << endl;
    }
};

// Derived class to access protected members
class ProtectedDerived : public ProtectedBase {
public:
    void setProtectedValue(int val) {
        protectedValue = val;
    }
    void displayProtectedValue() {
        cout << "Protected value: " << protectedValue << endl;
    }
};

// Derived class for multilevel inheritance
class DerivedLevel1 : public Base {
public:
    DerivedLevel1() {
        cout << "DerivedLevel1 class constructor called" << endl;
    }
};

class DerivedLevel2 : public DerivedLevel1 {
public:
    DerivedLevel2() {
        cout << "DerivedLevel2 class constructor called" << endl;
    }
};

// Base classes for multiple inheritance
class Base1 {
public:
    int base1Value;
    Base1() {
        base1Value = 1;
        cout << "Base1 class constructor called" << endl;
    }
};

class Base2 {
public:
    int base2Value;
    Base2() {
        base2Value = 2;
        cout << "Base2 class constructor called" << endl;
    }
};

// Derived class for multiple inheritance
class MultipleDerived : public Base1, public Base2 {
public:
    MultipleDerived() {
        cout << "MultipleDerived class constructor called" << endl;
    }
    void displayMultiple() {
        cout << "Base1 value: " << base1Value << ", Base2 value: " << base2Value << endl;
    }
};

// Classes to demonstrate ambiguity resolution
class AmbiguityBase1 {
public:
    void show() {
        cout << "Base1 show function" << endl;
    }
};

class AmbiguityBase2 {
public:
    void show() {
        cout << "Base2 show function" << endl;
    }
};

class AmbiguityDerived : public AmbiguityBase1, public AmbiguityBase2 {
public:
    void show() {
        AmbiguityBase1::show(); // Resolving ambiguity
    }
};

// Class to demonstrate virtual base class
class VirtualBase {
public:
    int virtualBaseValue;
    VirtualBase() {
        virtualBaseValue = 0;
        cout << "VirtualBase class constructor called" << endl;
    }
};

// Derived classes using virtual inheritance
class VirtualDerived1 : virtual public VirtualBase {
public:
    VirtualDerived1() {
        cout << "VirtualDerived1 class constructor called" << endl;
    }
};

class VirtualDerived2 : virtual public VirtualBase {
public:
    VirtualDerived2() {
        cout << "VirtualDerived2 class constructor called" << endl;
    }
};

// Derived class inheriting from virtual base classes
class VirtualDerivedFinal : public VirtualDerived1, public VirtualDerived2 {
public:
    VirtualDerivedFinal() {
        cout << "VirtualDerivedFinal class constructor called" << endl;
    }
};

// Class to demonstrate constructors in derived class
class DerivedConstructor : public Base {
public:
    int derivedValue;
    DerivedConstructor(int baseVal, int derivedVal) : Base() {
        baseValue = baseVal;
        derivedValue = derivedVal;
        cout << "DerivedConstructor class constructor called" << endl;
    }
    void displayDerivedConstructor() {
        cout << "Base value: " << baseValue << ", Derived value: " << derivedValue << endl;
    }
};

// Class to demonstrate initialization list in constructors
class InitListConstructor {
    int a, b;
public:
    InitListConstructor(int x, int y) : a(x), b(y) {
        cout << "InitListConstructor called with a = " << a << " and b = " << b << endl;
    }
};

int main() {
    // Single inheritance example
    DerivedSingle singleObj;
    singleObj.baseValue = 10;
    singleObj.derivedValue = 20;
    singleObj.displayBase();
    singleObj.displayDerivedSingle();

    // Protected access modifier example
    ProtectedDerived protectedObj;
    protectedObj.setProtectedValue(30);
    protectedObj.displayProtectedValue();

    // Multilevel inheritance example
    DerivedLevel2 multiLevelObj;
    multiLevelObj.baseValue = 40;
    multiLevelObj.displayBase();

    // Multiple inheritance example
    MultipleDerived multipleObj;
    multipleObj.displayMultiple();

    // Ambiguity resolution example
    AmbiguityDerived ambiguityObj;
    ambiguityObj.show();

    // Virtual base class example
    VirtualDerivedFinal virtualObj;
    virtualObj.virtualBaseValue = 50;
    cout << "Virtual base value: " << virtualObj.virtualBaseValue << endl;

    // Constructors in derived class example
    DerivedConstructor derivedConstructorObj(60, 70);
    derivedConstructorObj.displayDerivedConstructor();

    // Initialization list in constructors example
    InitListConstructor initListObj(80, 90);

    return 0;
}

/*
Base Class:

A base class is a class that is used as a starting point for creating other classes. It can contain data members and member functions that are common to all derived classes.
In the example, the Base class has a constructor and a method to display its value.
Single Inheritance:

Single inheritance is when a class (derived class) inherits from only one base class.
The DerivedSingle class inherits from the Base class, demonstrating single inheritance.
Protected Access Modifier:

The protected access modifier allows members to be accessible within the class and by derived class instances.
The ProtectedBase class demonstrates the protected access modifier.
Accessing Protected Members:

Derived classes can access protected members of the base class.
The ProtectedDerived class inherits from ProtectedBase and accesses the protected member.
Multilevel Inheritance:

Multilevel inheritance is when a class is derived from another derived class.
The DerivedLevel1 and DerivedLevel2 classes demonstrate multilevel inheritance.
Multiple Inheritance:

Multiple inheritance is when a class inherits from more than one base class.
The Base1 and Base2 classes are defined for multiple inheritance.
Demonstrating Multiple Inheritance:

The MultipleDerived class inherits from both Base1 and Base2, demonstrating multiple inheritance.
Ambiguity in Multiple Inheritance:

When two base classes have methods with the same name, it creates ambiguity in the derived class.
The AmbiguityBase1 and AmbiguityBase2 classes have a method with the same name.
Resolving Ambiguity:

The AmbiguityDerived class inherits from both AmbiguityBase1 and AmbiguityBase2 and resolves the ambiguity by specifying which base class method to call.
Virtual Base Class:

A virtual base class is used to avoid multiple instances of a base class when using multiple inheritance.
The VirtualBase class demonstrates a virtual base class.
Virtual Inheritance:

Virtual inheritance is used to ensure that only one instance of a base class is inherited by multiple derived classes.
The VirtualDerived1 and VirtualDerived2 classes use virtual inheritance from VirtualBase.
Demonstrating Virtual Inheritance:

The VirtualDerivedFinal class inherits from both VirtualDerived1 and VirtualDerived2, demonstrating virtual inheritance.
Constructors in Derived Classes:

Constructors in derived classes can initialize base class members using initialization lists.
The DerivedConstructor class demonstrates constructors in derived classes with initialization.
Initialization List in Constructors:

Initialization lists are used to initialize data members of a class.
The InitListConstructor class demonstrates initialization list in constructors.
Main Function:

In the main function, objects of each derived class are created to demonstrate the inheritance concepts.
You can copy and paste this code into your extra_concept_of_class.cpp file. The comments within the code explain the concepts and the functionality of each part of the code.
*/