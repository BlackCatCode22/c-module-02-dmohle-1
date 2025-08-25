// reverseAstring.cpp
// dH 8/25/25

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "\n\n Welcome to My Reverse a String program!\n\n";
    // Part 1
    // Use the reverse() function from the library named algoritthm
    // Create a string that we will reverse
    string myStrToReverse = "A Long String to Reverse";
    cout << "\n The string before being reversed is: " << myStrToReverse;
    reverse(myStrToReverse.begin(), myStrToReverse.end());
    cout << "\n My reversed string is: " << myStrToReverse;
    // Part 2
    // Use a for loop to swap characters
    for (int i = 0; i < 10000; i++) {
        cout << "\n the value of i is " << i << "\n";
    }
    return 0;
}