/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M
Assignment: Lab1A

Finding the smaller of two integers
*/

#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    cout << "Enter the first number: " << endl;
        int firstNum = 0;
    cin >> firstNum;

    cout << "Enter the second number: " << endl;
        int secondNum = 0;
    cin >> secondNum;
    
        if (firstNum > secondNum) {
            cout << "The smaller of the two is " << secondNum << endl;
        } else {
            cout << "The smaller of the two is " << firstNum << endl;
        }

        return 0;
}

