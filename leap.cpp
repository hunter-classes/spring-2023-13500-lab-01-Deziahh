/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M
Assignment: Lab1C

Determine if the year that is inputted is leap year or not
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a year: " << endl;
    int year = 0;
    cin >> year;
    
    if (year % 4 != 0 ) {
        cout << "Common Year" << endl;
    } else if (year % 100 != 0) {
        cout << "Leap Year" << endl;
    } else if (year % 400 != 0) {
        cout << "Common Year" << endl;
    } else {
        cout << "Leap Year" << endl;
    }
    return 0;
}
