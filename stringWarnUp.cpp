// stringWarmUp.cpp
// anything
// name of the programmer date
// dH 8/25/25

// References:
// https://www.w3schools.com/cpp/cpp_strings_input.asp


#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n\n Welcome to my String Warmup Program\n\n";
    cout << "\n Created in class on Aug 25, 2025\n";

    // Let's do some string stuff
    // Create a string object named myStrObject.
    string myStrObject = "abcdefghi";
    // Output my string object
    cout << "\n The value of my string object is: " << myStrObject << endl;

    // Use a handy dandy method from the string library to find its length
    cout << "The length of myStrObject is: " << myStrObject.length() << endl;

    // Create a variable that hold the length of our string
    int lengthOfMyStrObject = 0;

    lengthOfMyStrObject = myStrObject.length();
    cout << "\n The length of myStrObject is: " << lengthOfMyStrObject << endl;


}