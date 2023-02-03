/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M
Assignment: Lab1D

Returns the number of days in a given month
*/

#include <stdio.h>
using namespace std;
#include <iostream>

int main() {
  int year, month;
  
  std::cout << "Enter year: ";
  std::cin >> year;
  
  std::cout << "Enter month (1-12): ";
  std::cin >> month;
  
  if (month == 2) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      std::cout << "29 days" << std::endl;
    } else {
      std::cout << "28 days" << std::endl;
    }
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    std::cout << "30 days" << std::endl;
  } else {
    std::cout << "31 days" << std::endl;
  }
  
  return 0;
}
