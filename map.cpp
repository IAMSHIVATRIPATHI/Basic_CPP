#include <iostream>
#include <map>
using namespace std;

// Function to display the elements of a map
void display(const map<int, string>& m) {
    for (const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;
}

int main() {
    // What is a map?
    // A map is an associative container that stores elements in key-value pairs.
    // Each key is unique, and it is associated with a value.
    // Maps are implemented as balanced binary search trees, which means that the elements are ordered by key.

    // Why use a map?
    // Maps provide fast retrieval of values based on keys.
    // They are useful when you need to store and access data using unique keys.

    // A. Initializing a map
    // Maps can be initialized as empty or with elements.
    map<int, string> map1; // Empty map

    // B. Inserting elements in a map
    // Elements can be inserted using the subscript operator [] or the insert() method.
    map1[1] = "One";
    map1[2] = "Two";
    map1[3] = "Three";
    map1.insert({4, "Four"});
    map1.insert(pair<int, string>(5, "Five"));
    cout << "Map after inserting elements: " << endl;
    display(map1);

    // C. Accessing elements in a map
    // Elements can be accessed using the subscript operator [] or the at() method.
    cout << "Element with key 1: " << map1[1] << endl;
    cout << "Element with key 3: " << map1.at(3) << endl;

    // D. Modifying elements in a map
    // Elements can be modified using the subscript operator [] or the at() method.
    map1[1] = "Uno";
    map1.at(3) = "Tres";
    cout << "Map after modifying elements: " << endl;
    display(map1);

    // E. Removing elements from a map
    // Elements can be removed using the erase() method.
    map1.erase(2); // Remove element with key 2
    cout << "Map after removing element with key 2: " << endl;
    display(map1);

    // F. Using find() and count()
    // The find() method returns an iterator to the element if found, or map::end() if not found.
    // The count() method returns the number of elements with the specified key (0 or 1 for maps).
    auto it = map1.find(4);
    if (it != map1.end()) {
        cout << "Element found: " << it->first << ": " << it->second << endl;
    } else {
        cout << "Element not found" << endl;
    }

    if (map1.count(5) > 0) {
        cout << "Element with key 5 exists" << endl;
    } else {
        cout << "Element with key 5 does not exist" << endl;
    }

    // G. Iterating over a map
    // Elements can be iterated using iterators.
    cout << "Iterating over map elements: " << endl;
    for (auto it = map1.begin(); it != map1.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;
   // G. Iterating over a map using range-based for loop
    // Elements can be iterated using a range-based for loop.
    cout << "Iterating over map elements using range-based for loop: " << endl;
    for (const auto& pair : map1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;

    // H. Using size(), empty(), and clear()
    // The size() method returns the number of elements in the map.
    // The empty() method checks if the map is empty.
    // The clear() method removes all elements from the map.
    cout << "Size of map: " << map1.size() << endl;
    if (map1.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    map1.clear();
    cout << "Map after clear(): " << endl;
    display(map1);

    return 0;
}

/*
Explanation:
A. Initializing a map:
   - Maps can be initialized as empty or with elements.

B. Inserting elements in a map:
   - Elements can be inserted using the subscript operator [] or the insert() method.

C. Accessing elements in a map:
   - Elements can be accessed using the subscript operator [] or the at() method.

D. Modifying elements in a map:
   - Elements can be modified using the subscript operator [] or the at() method.

E. Removing elements from a map:
   - Elements can be removed using the erase() method.

F. Using find() and count():
   - The find() method returns an iterator to the element if found, or map::end() if not found.
   - The count() method returns the number of elements with the specified key (0 or 1 for maps).

G. Iterating over a map:
   - Elements can be iterated using iterators.

H. Using size(), empty(), and clear():
   - The size() method returns the number of elements in the map.
   - The empty() method checks if the map is empty.
   - The clear() method removes all elements from the map.
*/