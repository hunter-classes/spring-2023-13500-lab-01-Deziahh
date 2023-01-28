/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M
Assignment: Lab1B

Finding the smaller of three integers
*/


#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    int num = 0;
    cout << "Enter the first number: " << endl;
    int firstNum = 0;
    cin >> firstNum;

    cout << "Enter the second number: " << endl;
    int secondNum = 0;
    cin >> secondNum;
    
    cout << "Enter the third number: " << endl;
    int thirdNum = 0;
    cin >> thirdNum;
    
        if (firstNum > secondNum) {
            num = secondNum;
        } else {
            num = firstNum;
        }
    
        if (num > thirdNum) {
            cout << "The smaller of the three is " << thirdNum << endl;
        } else {
            cout << "The smaller of the three is " << num << endl;
        }

        return 0;
}

