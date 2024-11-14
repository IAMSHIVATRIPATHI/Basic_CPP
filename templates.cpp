#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 1. Class Template
template <class T>
class MyVector {
public:
    T* elements;
    int length;
    MyVector(int size) {
        length = size;
        elements = new T[length];
    }
    T dotProduct(MyVector& v) {
        T result = 0;
        for (int i = 0; i < length; i++) {
            result += this->elements[i] * v.elements[i];
        }
        return result;
    }
};

// 2. Function Template
template <class T1, class T2>
float calculateAverage(T1 x, T2 y) {
    float average = (x + y) / 2.0;
    return average;
}

// 3. Templates with Multiple Parameters
template <class T1, class T2>
class Pair {
public:
    T1 first;
    T2 second;
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

// 4. Templates with Default Parameters
template <class T1 = int, class T2 = float, class T3 = char>
class Triple {
public:
    T1 first;
    T2 second;
    T3 third;
    Triple(T1 a, T2 b, T3 c) {
        first = a;
        second = b;
        third = c;
    }
    void display() {
        cout << "First: " << first << ", Second: " << second << ", Third: " << third << endl;
    }
};

int main() {
    // Demonstrating Class Template
    MyVector<int> vec1(3);
    vec1.elements[0] = 1;
    vec1.elements[1] = 2;
    vec1.elements[2] = 3;
    MyVector<int> vec2(3);
    vec2.elements[0] = 4;
    vec2.elements[1] = 5;
    vec2.elements[2] = 6;
    int dotProd = vec1.dotProduct(vec2);
    cout << "Dot Product: " << dotProd << endl;

    // Demonstrating Function Template
    float avg1 = calculateAverage(5, 2);
    float avg2 = calculateAverage(5, 2.5);
    cout << "Average (int, int): " << avg1 << endl;
    cout << "Average (int, float): " << avg2 << endl;

    // Demonstrating Templates with Multiple Parameters
    Pair<int, char> pair1(1, 'A');
    pair1.display();
    Pair<float, string> pair2(3.14, "Pi");
    pair2.display();

    // Demonstrating Templates with Default Parameters
    Triple<> triple1(7, 8.5, 'Z');
    triple1.display();
    Triple<float, char, string> triple2(1.23, 'B', "Hello");
    triple2.display();

    // File I/O Operations
    ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Dot Product: " << dotProd << endl;
        outFile << "Average (int, int): " << avg1 << endl;
        outFile << "Average (int, float): " << avg2 << endl;
        outFile << "Pair1: ";
        outFile << "First: " << pair1.first << ", Second: " << pair1.second << endl;
        outFile << "Pair2: ";
        outFile << "First: " << pair2.first << ", Second: " << pair2.second << endl;
        outFile << "Triple1: ";
        outFile << "First: " << triple1.first << ", Second: " << triple1.second << ", Third: " << triple1.third << endl;
        outFile << "Triple2: ";
        outFile << "First: " << triple2.first << ", Second: " << triple2.second << ", Third: " << triple2.third << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    ifstream inFile("output.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}

/*
Explanation:
1. Class Template:
   - The `MyVector` class template allows creating vectors of any data type.
   - It includes a method `dotProduct` to calculate the dot product of two vectors.

2. Function Template:
   - The `calculateAverage` function template calculates the average of two values of potentially different data types.

3. Templates with Multiple Parameters:
   - The `Pair` class template allows creating pairs of values with different data types.
   - It includes a method `display` to print the values.

4. Templates with Default Parameters:
   - The `Triple` class template allows creating triples of values with default data types if not specified.
   - It includes a method `display` to print the values.

5. File I/O Operations:
   - The program demonstrates writing to and reading from a file using `ofstream` and `ifstream`.
   - It writes the results of the template operations to a file and then reads and displays the contents of the file.
*/