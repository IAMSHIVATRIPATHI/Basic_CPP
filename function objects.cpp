#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For function objects

using namespace std;

// Function to display the elements of a vector
void display(const vector<int>& v) {
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    // Initializing a vector
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Original vector: ";
    display(vec);

    // Using std::plus
    transform(vec.begin(), vec.end(), vec.begin(), bind2nd(plus<int>(), 10));
    cout << "After adding 10 to each element using std::plus: ";
    display(vec);

    // Using std::minus
    transform(vec.begin(), vec.end(), vec.begin(), bind2nd(minus<int>(), 5));
    cout << "After subtracting 5 from each element using std::minus: ";
    display(vec);

    // Using std::multiplies
    transform(vec.begin(), vec.end(), vec.begin(), bind2nd(multiplies<int>(), 2));
    cout << "After multiplying each element by 2 using std::multiplies: ";
    display(vec);

    // Using std::divides
    transform(vec.begin(), vec.end(), vec.begin(), bind2nd(divides<int>(), 2));
    cout << "After dividing each element by 2 using std::divides: ";
    display(vec);

    // Using std::modulus
    transform(vec.begin(), vec.end(), vec.begin(), bind2nd(modulus<int>(), 3));
    cout << "After taking modulus 3 of each element using std::modulus: ";
    display(vec);

    // Using std::negate
    transform(vec.begin(), vec.end(), vec.begin(), negate<int>());
    cout << "After negating each element using std::negate: ";
    display(vec);

    // Using std::equal_to
    vector<int> vec2 = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    bool all_equal = equal(vec.begin(), vec.end(), vec2.begin(), equal_to<int>());
    cout << "All elements in vec are equal to 5 using std::equal_to: " << (all_equal ? "True" : "False") << endl;

    // Using std::not_equal_to
    bool any_not_equal = any_of(vec.begin(), vec.end(), bind2nd(not_equal_to<int>(), 5));
    cout << "Any element in vec is not equal to 5 using std::not_equal_to: " << (any_not_equal ? "True" : "False") << endl;

    // Using std::greater
    bool any_greater = any_of(vec.begin(), vec.end(), bind2nd(greater<int>(), 0));
    cout << "Any element in vec is greater than 0 using std::greater: " << (any_greater ? "True" : "False") << endl;

    // Using std::less
    bool any_less = any_of(vec.begin(), vec.end(), bind2nd(less<int>(), 0));
    cout << "Any element in vec is less than 0 using std::less: " << (any_less ? "True" : "False") << endl;

    // Using std::greater_equal
    bool all_greater_equal = all_of(vec.begin(), vec.end(), bind2nd(greater_equal<int>(), -5));
    cout << "All elements in vec are greater than or equal to -5 using std::greater_equal: " << (all_greater_equal ? "True" : "False") << endl;

    // Using std::less_equal
    bool all_less_equal = all_of(vec.begin(), vec.end(), bind2nd(less_equal<int>(), 0));
    cout << "All elements in vec are less than or equal to 0 using std::less_equal: " << (all_less_equal ? "True" : "False") << endl;

    // Using std::sort with std::greater
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Vector sorted in descending order using std::sort with std::greater: ";
    display(vec);

    // Using std::sort with std::less
    sort(vec.begin(), vec.end(), less<int>());
    cout << "Vector sorted in ascending order using std::sort with std::less: ";
    display(vec);

    return 0;
}

/*
Explanation:
1. std::plus: Adds two elements.
2. std::minus: Subtracts the second element from the first.
3. std::multiplies: Multiplies two elements.
4. std::divides: Divides the first element by the second.
5. std::modulus: Computes the remainder of the division of the first element by the second.
6. std::negate: Negates the element.
7. std::equal_to: Checks if two elements are equal.
8. std::not_equal_to: Checks if two elements are not equal.
9. std::greater: Checks if the first element is greater than the second.
10. std::less: Checks if the first element is less than the second.
11. std::greater_equal: Checks if the first element is greater than or equal to the second.
12. std::less_equal: Checks if the first element is less than or equal to the second.
13. std::sort with std::greater: Sorts elements in descending order.
14. std::sort with std::less: Sorts elements in ascending order.
*/