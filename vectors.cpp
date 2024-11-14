#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <algorithm>
#include <numeric> // for std::iota
using namespace std;

// Function to display the elements of a vector
void display(const vector<int>& v) {
    cout << "The elements are: ";
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    // A. Initializing a vector
    vector<int> v1 = {1, 2, 3, 4}; // Initializing with elements
    vector<int> v2(4, 10); // Initializing with size and uniform value

    // Displaying initialized vectors
    display(v1);
    display(v2);

    // B. Inserting elements in a vector
    v1.push_back(5); // Inserting at the end
    display(v1);

    v1.insert(v1.begin(), 0); // Inserting at the beginning
    display(v1);

    // C. Accessing/Changing elements in a vector
    cout << "Element at index 0 is " << v1[0] << endl;
    cout << "Element at index 2 is " << v1.at(2) << endl;

    // Changing elements
    v1[0] = 10;
    v1.at(2) = 20;
    display(v1);

    // D. Removing elements from a vector
    v1.pop_back(); // Removing from the end
    display(v1);

    v1.erase(v1.begin()); // Removing from the beginning
    display(v1);

    // E. Commonly Used Member Functions
    // Iterators
    cout << "Output of begin and end: ";
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout << "Output of cbegin and cend: ";
    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
        cout << *i << " ";
    cout << endl;

    cout << "Output of rbegin and rend: ";
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
        cout << *ir << " ";
    cout << endl;

    cout << "Output of crbegin and crend: ";
    for (auto ir = v1.crbegin(); ir != v1.crend(); ++ir)
        cout << *ir << " ";
    cout << endl;

    // Capacity
    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    cout << "Max_Size: " << v1.max_size() << endl;

    v1.resize(4);
    cout << "Size after resize: " << v1.size() << endl;

    if (v1.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    v1.shrink_to_fit();
    cout << "Vector elements after shrink_to_fit: ";
    display(v1);

    // Element access
    cout << "Reference operator [g]: v1[2] = " << v1[2] << endl;
    cout << "at: v1.at(2) = " << v1.at(2) << endl;
    cout << "front: v1.front() = " << v1.front() << endl;
    cout << "back: v1.back() = " << v1.back() << endl;

    int* pos = v1.data();
    cout << "The first element is " << *pos << endl;

    // Modifiers
    vector<int> v3;
    v3.assign(5, 10);
    cout << "The vector elements are: ";
    display(v3);

    v3.push_back(15);
    cout << "The last element is: " << v3.back() << endl;

    v3.pop_back();
    cout << "The vector elements after pop_back: ";
    display(v3);

    v3.insert(v3.begin(), 5);
    cout << "The first element after insert: " << v3.front() << endl;

    v3.erase(v3.begin());
    cout << "The first element after erase: " << v3.front() << endl;

    v3.emplace(v3.begin(), 5);
    cout << "The first element after emplace: " << v3.front() << endl;

    v3.emplace_back(20);
    cout << "The last element after emplace_back: " << v3.back() << endl;

    v3.clear();
    cout << "Vector size after clear: " << v3.size() << endl;

    vector<int> v4 = {1, 2};
    vector<int> v5 = {3, 4};
    cout << "Vector 1: ";
    display(v4);
    cout << "Vector 2: ";
    display(v5);

    v4.swap(v5);
    cout << "After Swap - Vector 1: ";
    display(v4);
    cout << "After Swap - Vector 2: ";
    display(v5);

    // 8 Ways to Initialize Vector in C++
    // 1. Using Initializer List
    vector<int> vec1 = {1, 2, 3, 4, 5};
    cout << "Using Initializer List: ";
    display(vec1);

    // 2. One by One Initialization
    vector<int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(4);
    vec2.push_back(5);
    cout << "One by One Initialization: ";
    display(vec2);

    // 3. With a Single Value
    vector<int> vec3(5, 10); // 5 elements, each initialized to 10
    cout << "With a Single Value: ";
    display(vec3);

    // 4. From an Array
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec4(begin(arr), end(arr));
    cout << "From an Array: ";
    display(vec4);

    // 5. From Another Vector
    vector<int> vec5(vec1);
    cout << "From Another Vector: ";
    display(vec5);

    // 6. From Any STL Container
    list<int> lst = {1, 2, 3, 4, 5};
    vector<int> vec6(lst.begin(), lst.end());
    cout << "From Any STL Container: ";
    display(vec6);

    // 7. Using std::fill() Function
    vector<int> vec7(5);
    fill(vec7.begin(), vec7.end(), 10);
    cout << "Using std::fill() Function: ";
    display(vec7);

    // 8. Using std::iota() Function
    vector<int> vec8(5);
    iota(vec8.begin(), vec8.end(), 1); // Fills vec8 with 1, 2, 3, 4, 5
    cout << "Using std::iota() Function: ";
    display(vec8);

    return 0;
}

/*
Explanation:
A. Initializing a vector:
   - Vectors can be initialized with elements or with a size and uniform value.

B. Inserting elements in a vector:
   - Elements can be inserted at the end using push_back() or at any position using insert().

C. Accessing/Changing elements in a vector:
   - Elements can be accessed using the index operator [] or the at() method.
   - Elements can be changed using the index operator [] or the at() method.

D. Removing elements from a vector:
   - Elements can be removed from the end using pop_back() or from any position using erase().

E. Commonly Used Member Functions:
   - Iterators: begin(), end(), cbegin(), cend(), rbegin(), rend(), crbegin(), crend().
   - Capacity: size(), capacity(), max_size(), resize(), empty(), shrink_to_fit().
   - Element access: operator[], at(), front(), back(), data().
   - Modifiers: assign(), push_back(), pop_back(), insert(), erase(), swap(), clear(), emplace(), emplace_back().

F. 8 Ways to Initialize Vector in C++:
   1. Using Initializer List: Initializes the vector with a list of values.
   2. One by One Initialization: Initializes the vector by pushing elements one by one.
   3. With a Single Value: Initializes the vector with a specified size and fills all elements with a single value.
   4. From an Array: Initializes the vector with elements from an array.
   5. From Another Vector: Initializes the vector by copying elements from another vector.
   6. From Any STL Container: Initializes the vector with elements from any STL container (e.g., list).
   7. Using std::fill() Function: Fills the vector with a specified value using the std::fill() function.
   8. Using std::iota() Function: Fills the vector with sequentially increasing values starting from a specified value using the std::iota() function.
*/