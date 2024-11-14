#include <iostream>
#include <list>
using namespace std;

// Function to display the elements of a list
void display(const list<int>& lst) {
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // A. Initializing a list
    list<int> list1; // Empty list of 0 length

    // B. Inserting elements in a list
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    cout << "List after push_back operations: ";
    display(list1);

    // C. Inserting elements using an iterator
    list<int> list2(3); // Empty list of length 3
    list<int>::iterator it = list2.begin();
    *it = 45;
    ++it;
    *it = 6;
    ++it;
    *it = 9;
    cout << "List2 after inserting elements using iterator: ";
    display(list2);

    // D. Using pop_back() and pop_front()
    list1.pop_back();
    cout << "List1 after pop_back: ";
    display(list1);

    list1.pop_front();
    cout << "List1 after pop_front: ";
    display(list1);

    // E. Using remove()
    list1.push_back(9);
    list1.push_back(9);
    list1.remove(9);
    cout << "List1 after remove(9): ";
    display(list1);

    // F. Using sort()
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(2);
    cout << "List1 before sort: ";
    display(list1);
    list1.sort();
    cout << "List1 after sort: ";
    display(list1);

    // G. Using reverse()
    list1.reverse();
    cout << "List1 after reverse: ";
    display(list1);

    // H. Using merge()
    list<int> list3 = {10, 20, 30};
    list<int> list4 = {15, 25, 35};
    list3.merge(list4);
    cout << "List3 after merge with list4: ";
    display(list3);

    // I. Using unique()
    list<int> list5 = {1, 2, 2, 3, 3, 3, 4, 5};
    list5.unique();
    cout << "List5 after unique: ";
    display(list5);

    // J. Using splice()
    list<int> list6 = {100, 200, 300};
    list<int> list7 = {400, 500, 600};
    list<int>::iterator it2 = list6.begin();
    ++it2;
    list6.splice(it2, list7);
    cout << "List6 after splice with list7: ";
    display(list6);

    return 0;
}

/*
Explanation:
A. Initializing a list:
   - Lists can be initialized as empty or with a specified size.

B. Inserting elements in a list:
   - Elements can be inserted at the end using push_back().

C. Inserting elements using an iterator:
   - Elements can be inserted at specific positions using iterators.

D. Using pop_back() and pop_front():
   - Elements can be removed from the end using pop_back() or from the front using pop_front().

E. Using remove():
   - Elements can be removed by value using the remove() method.

F. Using sort():
   - Elements can be sorted in ascending order using the sort() method.

G. Using reverse():
   - Elements can be reversed using the reverse() method.

H. Using merge():
   - Two sorted lists can be merged using the merge() method.

I. Using unique():
   - Consecutive duplicate elements can be removed using the unique() method.

J. Using splice():
   - Elements from one list can be transferred to another list using the splice() method.
*/