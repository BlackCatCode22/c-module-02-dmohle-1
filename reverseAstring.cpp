// reverseAstring.cpp
// dH 8/25/25

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;



string trim(const string& strIn) {
    string trimmed_s = strIn;

    // Trim leading whitespace
    trimmed_s.erase(trimmed_s.begin(), std::find_if(trimmed_s.begin(), trimmed_s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));

    // Trim trailing whitespace
    trimmed_s.erase(std::find_if(trimmed_s.rbegin(), trimmed_s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), trimmed_s.end());

    return trimmed_s;
}


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
    // Various string methods

    // Create a string object
    string myStr01 = "   this is a literal string   ";
    // Find the length method

    

    int strlength = 0;

    strlength = myStr01.length();
    // Output the length of the string:
    cout << "\n The length of my myStr01 is: " << strlength;
    // Output the string object's value.
    cout << "\n\n myStr01 is:" << myStr01 << "\n";

    // trim the empty spaces
    string myTrimmedStr = trim(myStr01);

    // find the string object's length
    strlength = myTrimmedStr.length();
    // output the length of the string:
    cout << "\n The length of my myTrimmedStr is: " << strlength;
    // Output the trimmed string:
    cout << "\n myTrimmedStr is:" << myTrimmedStr << "\n\n";



    return 0;
}