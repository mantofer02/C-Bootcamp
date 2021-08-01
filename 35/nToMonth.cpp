/*
  Copyright 2021 Marco Ferraro
*/

#include <math.h>
#include <string>
#include <iostream>
#include <vector>

/*
  Create a function that takes number and return a month
*/

std::string nToMonths(int n) {
  std::vector<std::string> months = {"January", "February", "March", "April",
  "May", "June", "July", "August", "September", "October", "November",
  "December"};


  if (n >= 0 && n <= 11) {
    return months[n];
  }
  return "Error";
}

int main(int argc, char* argv[]) {
  int n;
  if (argc > 1) {
    n = atoi(argv[1]);
  }
  std::cout << nToMonths(n - 1) << std::endl;

  return 0;
}
