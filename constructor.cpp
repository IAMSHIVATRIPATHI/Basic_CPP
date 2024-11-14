#include <iostream>
using namespace std;

// Class with a default constructor
class DefaultConstructor {
    int value;
public:
    // Default constructor
    DefaultConstructor() {
        value = 0;
        cout << "Default constructor called, value = " << value << endl;
    }
};

// Class with parameterized and default constructors
class ParameterizedConstructor {
    int value;
public:
    // Default constructor
    ParameterizedConstructor() {
        value = 0;
        cout << "Default constructor called, value = " << value << endl;
    }

    // Parameterized constructor
    ParameterizedConstructor(int v) {
        value = v;
        cout << "Parameterized constructor called, value = " << value << endl;
    }
};

// Class with overloaded constructors
class OverloadedConstructor {
    int value;
public:
    // Default constructor
    OverloadedConstructor() {
        value = 0;
        cout << "Default constructor called, value = " << value << endl;
    }

    // Parameterized constructor
    OverloadedConstructor(int v) {
        value = v;
        cout << "Parameterized constructor called, value = " << value << endl;
    }

    // Another parameterized constructor
    OverloadedConstructor(int v, int increment) {
        value = v + increment;
        cout << "Parameterized constructor with increment called, value = " << value << endl;
    }
};

// Class with constructor having default arguments
class ConstructorWithDefaultArgs {
    int value;
public:
    // Constructor with default arguments
    ConstructorWithDefaultArgs(int v = 0) {
        value = v;
        cout << "Constructor called, value = " << value << endl;
    }
};

// Class with dynamic initialization using constructor
class DynamicInitialization {
    int* value;
public:
    // Constructor for dynamic initialization
    DynamicInitialization(int v) {
        value = new int(v);
        cout << "Constructor called, dynamically initialized value = " << *value << endl;
    }

    // Destructor to free dynamically allocated memory
    ~DynamicInitialization() {
        delete value;
        cout << "Destructor called, memory freed" << endl;
    }
};

// Class with a copy constructor
class CopyConstructor {
    int value;
public:
    // Parameterized constructor
    CopyConstructor(int v) {
        value = v;
        cout << "Parameterized constructor called, value = " << value << endl;
    }

    // Copy constructor
    CopyConstructor(const CopyConstructor &obj) {
        value = obj.value;
        cout << "Copy constructor called, value = " << value << endl;
    }
};

// Class with a destructor
class DestructorExample {
    int value;
public:
    // Parameterized constructor
    DestructorExample(int v) {
        value = v;
        cout << "Parameterized constructor called, value = " << value << endl;
    }

    // Destructor
    ~DestructorExample() {
        cout << "Destructor called, value = " << value << endl;
    }
};

int main() {
    // Default constructor example
    DefaultConstructor obj1;

    // Parameterized and default constructors example
    ParameterizedConstructor obj2; // Default constructor is called
    ParameterizedConstructor obj3(10); // Parameterized constructor is called

    // Constructor overloading example
    OverloadedConstructor obj4; // Default constructor is called
    OverloadedConstructor obj5(10); // Parameterized constructor is called
    OverloadedConstructor obj6(10, 5); // Parameterized constructor with increment is called

    // Constructor with default arguments example
    ConstructorWithDefaultArgs obj7; // Constructor with default argument is called
    ConstructorWithDefaultArgs obj8(10); // Constructor with provided argument is called

    // Dynamic initialization of objects using constructors example
    DynamicInitialization obj9(10); // Constructor with dynamic initialization is called

    // Copy constructor example
    CopyConstructor obj10(10); // Parameterized constructor is called
    CopyConstructor obj11 = obj10; // Copy constructor is called

    // Destructor example
    DestructorExample obj12(10); // Parameterized constructor is called

    return 0;
}

/*
Explanation:
DefaultConstructor class demonstrates a default constructor:

A default constructor is a constructor that takes no arguments. It is used to initialize objects with default values. The DefaultConstructor class has a default constructor that initializes its data members to default values.
ParameterizedConstructor class demonstrates both default and parameterized constructors:

A parameterized constructor is a constructor that takes arguments to initialize an object with specific values. The ParameterizedConstructor class has both a default constructor and a parameterized constructor, allowing objects to be initialized with either default or specific values.
OverloadedConstructor class demonstrates constructor overloading:

Constructor overloading is the process of defining multiple constructors with different sets of parameters. The OverloadedConstructor class demonstrates constructor overloading by having multiple constructors with different parameter lists, allowing objects to be initialized in various ways.
ConstructorWithDefaultArgs class demonstrates constructors with default arguments:

Constructors with default arguments allow some parameters to have default values if no arguments are provided for them. The ConstructorWithDefaultArgs class demonstrates this by having a constructor with default arguments, allowing objects to be initialized with either provided or default values.
DynamicInitialization class demonstrates dynamic initialization of objects using constructors and includes a destructor to free memory:

Dynamic initialization involves allocating memory for objects at runtime using the new keyword. The DynamicInitialization class demonstrates this by dynamically allocating memory for its data members in the constructor and freeing the memory in the destructor.
CopyConstructor class demonstrates a copy constructor:

A copy constructor is a constructor that initializes an object using another object of the same class. The CopyConstructor class demonstrates this by having a copy constructor that creates a new object as a copy of an existing object.
DestructorExample class demonstrates a destructor:

A destructor is a special member function that is called when an object goes out of scope or is explicitly deleted. It is used to release resources allocated by the object. The DestructorExample class demonstrates a destructor that performs cleanup tasks when the object is destroyed.
In the main function, objects of each class are created to demonstrate the constructors and destructors in action:

In the main function, objects of each class are created to demonstrate how the constructors and destructors work. This includes creating instances of classes with default constructors, parameterized constructors, overloaded constructors, constructors with default arguments, dynamic initialization, copy constructors, and destructors. Each object is used to show how the constructors initialize the objects and how the destructors clean up resources when the objects are destroyed.
*/