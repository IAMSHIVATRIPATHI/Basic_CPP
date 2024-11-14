#include <iostream>
using namespace std;


/*

Bitwise AND (&):

This operator performs a logical AND operation on each pair of corresponding bits of two integers.
Example: a & b where a = 13 (binary 1101) and b = 5 (binary 0101).
1101 & 0101 results in 0101 (binary) which is 5 in decimal.

Bitwise OR (|):

This operator performs a logical OR operation on each pair of corresponding bits of two integers.
Example: a | b where a = 13 (binary 1101) and b = 5 (binary 0101).
1101 | 0101 results in 1101 (binary) which is 13 in decimal.

Bitwise XOR (^):

This operator performs a logical XOR (exclusive OR) operation on each pair of corresponding bits of two integers.
Example: a ^ b where a = 13 (binary 1101) and b = 5 (binary 0101).
1101 ^ 0101 results in 1000 (binary) which is 8 in decimal.

Bitwise NOT (~):

This operator inverts all the bits of an integer, turning 0s into 1s and 1s into 0s.
Example: ~a where a = 13 (binary 1101).
~1101 results in ...11110010 (binary) which is -14 in decimal (considering two's complement representation for negative numbers)

Bitwise Right Shift (>>):

This operator shifts the bits of the first operand to the right by the number of positions specified by the second operand.
Example: a >> 2 where a = 13 (binary 1101).
1101 >> 2 results in 0011 (binary) which is 3 in decimal.

Bitwise Left Shift (<<):

This operator shifts the bits of the first operand to the left by the number of positions specified by the second operand.
Example: a << 2 where a = 13 (binary 1101).
1101 << 2 results in 110100 (binary) which is 52 in decimal.

*/
int main()
{
    int a = 13; // 1101 in binary
    int b = 5;  // 0101 in binary

    // Bitwise AND: 1101 & 0101 = 0101 (5 in decimal)
    cout << "The value of a & b is " << (a & b) << endl;

    // Bitwise OR: 1101 | 0101 = 1101 (13 in decimal)
    cout << "The value of a | b is " << (a | b) << endl;

    // Bitwise XOR: 1101 ^ 0101 = 1000 (8 in decimal)
    cout << "The value of a ^ b is " << (a ^ b) << endl;

    // Bitwise NOT: ~1101 = ...11110010 (-14 in decimal, two's complement)
    cout << "The value of ~a is " << (~a) << endl;

    // Bitwise right shift: 1101 >> 2 = 0011 (3 in decimal)
    cout << "The value of a >> 2 is " << (a >> 2) << endl;

    // Bitwise left shift: 1101 << 2 = 110100 (52 in decimal)
    cout << "The value of a << 2 is " << (a << 2) << endl;
}

