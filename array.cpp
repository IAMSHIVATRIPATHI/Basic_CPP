#include <iostream>
#include <algorithm> // For std::sort, std::reverse, std::fill, std::find
#include <vector>    // For std::vector
using namespace std;

int main() {
    // What are Arrays in C++
    // An array is a collection of items of the same type stored in contiguous memory locations.
    // Example: Storing marks of 4 students
    int marks[] = {23, 45, 56, 89};
    cout << "Marks of 4 students:" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // Another way to declare and initialize an array
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout << "These are math marks:" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // Changing the value at a specific index
    marks[2] = 455;
    cout << "Updated marks:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "The value of marks[" << i << "] is " << marks[i] << endl;
    }

    // Pointers and Arrays
    // The name of the array is the address of the first element
    int* p = marks;
    cout << "Pointer and Array Example:" << endl;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 2) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;

    // Array Operations
    // 1. Declaration and Initialization
    int arr[10]; // Array of 10 integers
    int arr2[] = {1, 2, 3, 4, 5}; // Size is inferred (5 elements)
    int arr3[10] = {1, 2, 3}; // First three elements initialized, rest to 0
    int arr4[5] = {}; // All elements initialized to 0
    std::fill(arr4, arr4 + 5, 10); // Fill array with the value 10

    // 2. Accessing and Modifying Elements
    int x = arr2[0]; // Access the first element
    arr2[1] = 42; // Change second element to 42
    int* ptr = arr2;
    int y = *(ptr + 2); // Access the third element (equivalent to arr2[2])

    // 3. Array Traversal
    cout << "Array Traversal:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int val : arr2) {
        cout << val << " ";
    }
    cout << endl;

    for (int* ptr = arr2; ptr < arr2 + 5; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;

    // 4. Size Operations
    cout << "Size of array arr2: " << sizeof(arr2) / sizeof(arr2[0]) << endl;

    // 5. Sorting
    std::sort(arr2, arr2 + 5); // Sorts the array in ascending order
    std::sort(arr2, arr2 + 5, std::greater<int>()); // Sorts the array in descending order

    // 6. Searching
    auto it = std::find(arr2, arr2 + 5, 3); // Find the first occurrence of 3
    if (it != arr2 + 5) {
        cout << "Found 3 at index: " << (it - arr2) << endl;
    }

    // 7. Reversing
    std::reverse(arr2, arr2 + 5); // Reverses the array in-place

    // 8. Copying
    int arr5[5];
    std::copy(arr2, arr2 + 5, arr5); // Copies elements from arr2 to arr5

    // 9. Filling
    std::fill(arr5, arr5 + 5, 0); // Fill the array with 0

    // 10. Shuffling
    std::random_shuffle(arr2, arr2 + 5); // Randomly shuffle the array

    // 11. Swapping
    std::swap(arr2[0], arr2[1]); // Swap first and second elements

    // 12. Resizing (using std::vector)
    std::vector<int> vec(10); // Vector with 10 elements
    vec.push_back(42); // Adds an element to the end
    vec.resize(15); // Resizes the vector to 15 elements

    // 13. Multi-dimensional Arrays
    int arr6[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int z = arr6[1][2]; // Access element in the second row, third column
    cout << "Multi-dimensional Array Traversal:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr6[i][j] << " ";
        }
        cout << endl;
    }

    // 14. Dynamic Arrays (using pointers)
    int* arr7 = new int[10]; // Dynamically allocate an array of 10 integers
    arr7[0] = 10; // Set first element
    delete[] arr7; // Free the memory

    // 15. Array vs Vector
    // Arrays: Fixed size at compile-time, direct memory access
    // Vectors: Dynamic size, provides more features and flexibility

    // Common Mistakes
    // Out-of-bounds access: C++ arrays do not check bounds at runtime
    // Array decay: When passing arrays to functions, they decay to pointers (you lose the size information)

    return 0;
}