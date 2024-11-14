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

    return 0;
}

/*
Explanation:
Base class 'Base' is defined with a constructor and a method to display its value:

A base class is a class that serves as a foundation for other classes. It can contain data members and member functions that are common to all derived classes. In this example, the Base class has a constructor that initializes a value and a method to display this value.
Derived class 'DerivedSingle' inherits from 'Base' demonstrating single inheritance:

Single inheritance is when a class (derived class) inherits from only one base class. The DerivedSingle class inherits from the Base class, demonstrating single inheritance. It has its own data members and methods in addition to those inherited from the Base class.
'ProtectedBase' class demonstrates the protected access modifier:

The protected access modifier allows members to be accessible within the class and by derived class instances. The ProtectedBase class demonstrates the use of the protected access modifier by having a protected data member.
'ProtectedDerived' class inherits from 'ProtectedBase' and accesses the protected member:

Derived classes can access protected members of the base class. The ProtectedDerived class inherits from ProtectedBase and accesses the protected member, demonstrating how protected members can be used in derived classes.
'DerivedLevel1' and 'DerivedLevel2' classes demonstrate multilevel inheritance:

Multilevel inheritance is when a class is derived from another derived class. The DerivedLevel1 class inherits from Base, and the DerivedLevel2 class inherits from DerivedLevel1, demonstrating multilevel inheritance.
'Base1' and 'Base2' classes are defined for multiple inheritance:

Multiple inheritance is when a class inherits from more than one base class. The Base1 and Base2 classes are defined to be used in multiple inheritance scenarios.
'MultipleDerived' class inherits from both 'Base1' and 'Base2' demonstrating multiple inheritance:

The MultipleDerived class inherits from both Base1 and Base2, demonstrating multiple inheritance. This allows the derived class to have members and methods from both base classes.
'AmbiguityBase1' and 'AmbiguityBase2' classes have a method with the same name:

When two base classes have methods with the same name, it creates ambiguity in the derived class. The AmbiguityBase1 and AmbiguityBase2 classes both have a method with the same name, setting up a scenario for ambiguity.
'AmbiguityDerived' class inherits from both 'AmbiguityBase1' and 'AmbiguityBase2' and resolves the ambiguity by specifying which base class method to call:

The AmbiguityDerived class inherits from both AmbiguityBase1 and AmbiguityBase2 and resolves the ambiguity by explicitly specifying which base class method to call. This demonstrates how to handle method name conflicts in multiple inheritance.
In the main function, objects of each derived class are created to demonstrate the inheritance concepts:

In the main function, objects of each derived class are created to demonstrate the various inheritance concepts. This includes creating instances of classes that demonstrate single inheritance, multilevel inheritance, multiple inheritance, and resolving ambiguity in multiple inheritance. Each object is used to show how the inherited members and methods work in practice.
*/