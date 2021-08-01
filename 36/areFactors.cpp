/*
  Copyright 2021 Marco Ferraro
*/

#include <math.h>
#include <string>
#include <iostream>
#include <vector>

/*
  Write a function that return true if all integers are factors of a number,
  and false otherwise.
*/

bool areFactors(std::vector<int> factors, int n) {
  bool isFactors = true;
  for (int i = 0; i < factors.size(); i++) {
    if (n % factors[i]) {
      i = factors.size();
      isFactors = false;
    }
  }
  return isFactors;
}

int main(void) {
  std::vector<int> factors = {2, 7, 5};
  int n = 30;

  std::cout << areFactors(factors, n) << std::endl;

  return 0;
}
