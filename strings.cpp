#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring and initializing a string
    string str = "shiva";
    cout << "String: " << str << endl;

    // Accessing characters in a string using at() function
    cout << "Character at index 0: " << str.at(0) << endl;

    // Getting the length of the string using length() and size() functions
    cout << "Length of the string: " << str.length() << endl;
    cout << "Size of the string: " << str.size() << endl;

    // Getting the maximum size of the string
    cout << "Maximum size of the string: " << str.max_size() << endl;

    // Checking if the string is empty using empty() function
    cout << "Is the string empty? " << (str.empty() ? "Yes" : "No") << endl;

    // Appending a string using append() function
    str.append(" is learning C++");
    cout << "Appended string: " << str << endl;

    // Getting a substring using substr() function
    string subStr = str.substr(0, 5); // Get the first 5 characters
    cout << "Substring: " << subStr << endl;

    // Finding the first occurrence of a character using find() function
    size_t pos = str.find('i');
    if (pos != string::npos) {
        cout << "First occurrence of 'i' at index: " << pos << endl;
    } else {
        cout << "'i' not found in the string" << endl;
    }

    // Finding the last occurrence of a character using rfind() function
    pos = str.rfind('i');
    if (pos != string::npos) {
        cout << "Last occurrence of 'i' at index: " << pos << endl;
    } else {
        cout << "'i' not found in the string" << endl;
    }

    // Replacing a part of the string using replace() function
    str.replace(0, 5, "Shiva");
    cout << "String after replacement: " << str << endl;

    // Inserting a string at a specified index using insert() function
    str.insert(5, " Kumar");
    cout << "String after insertion: " << str << endl;

    // Erasing characters from the string using erase() function
    str.erase(5, 6); // Erase " Kumar"
    cout << "String after erasing: " << str << endl;

    // Comparing two strings using compare() function
    string str2 = "Shiva is learning C++";
    int result = str.compare(str2);
    if (result == 0) {
        cout << "Strings are equal" << endl;
    } else if (result < 0) {
        cout << "str is less than str2" << endl;
    } else {
        cout << "str is greater than str2" << endl;
    }

    return 0;
}