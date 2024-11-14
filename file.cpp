#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 1. File I/O in C++: Working with Files
    // Creating an ofstream object to write to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "This is a line of text.\n";
        outFile << "This is another line of text.\n";
        outFile.close(); // Closing the file after writing
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // 2. File I/O in C++: Reading and Writing Files
    // Creating an ifstream object to read from a file
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl; // Reading and displaying each line from the file
        }
        inFile.close(); // Closing the file after reading
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    // 3. File I/O in C++: Read/Write in the Same Program & Closing Files
    // Creating an fstream object to read from and write to a file
    fstream file("example.txt", ios::in | ios::out | ios::app);
    if (file.is_open()) {
        file << "Appending a new line to the file.\n"; // Writing to the file
        file.seekg(0); // Moving the read pointer to the beginning of the file
        while (getline(file, line)) {
            cout << line << endl; // Reading and displaying each line from the file
        }
        file.close(); // Closing the file after reading and writing
    } else {
        cout << "Unable to open file for reading and writing." << endl;
    }

    // 4. File I/O in C++: open() and eof() functions
    // Using the open function to open a file
    file.open("example.txt", ios::in);
    if (file.is_open()) {
        while (!file.eof()) { // Checking if the end of the file has been reached
            getline(file, line);
            cout << line << endl; // Reading and displaying each line from the file
        }
        file.close(); // Closing the file after reading
    } else {
        cout << "Unable to open file using open() function." << endl;
    }

    return 0;
}

/*
Explanation:
1. File I/O in C++: Working with Files
   - An ofstream object is created to write to a file named "example.txt".
   - The file is opened, data is written to it, and then it is closed using the close method.

2. File I/O in C++: Reading and Writing Files
   - An ifstream object is created to read from the file "example.txt".
   - The file is opened, data is read line by line using the getline function, and then it is closed using the close method.

3. File I/O in C++: Read/Write in the Same Program & Closing Files
   - An fstream object is created to both read from and write to the file "example.txt".
   - The file is opened in read, write, and append mode using ios::in, ios::out, and ios::app.
   - Data is appended to the file, and then the file is read from the beginning using the seekg method to move the read pointer.
   - The file is closed using the close method.

4. File I/O in C++: open() and eof() functions
   - The open function is used to open the file "example.txt" in read mode.
   - The eof function is used to check if the end of the file has been reached during reading.
   - Data is read line by line using the getline function, and then the file is closed using the close method.
*/