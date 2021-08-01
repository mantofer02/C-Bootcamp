/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <math.h>
/*
  Create a function that returns how many possible outcomes can come from a certain
  number of switches (on / off)
*/
static unsigned int switches(int n) {
  return pow(2, n);
}


int main(int argc, char** argv) {
  int n = 0;
  if (argc > 1) {
    n= atoi(argv[1]);
  }
  std::cout << switches(n) << std::endl;

  return 0;
}
