/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>


/*
  Create a function that determines whether or not it's possible
  to split a pie fairly given:
   1. Total number of slices.
   2. Number of recipients.
   3. How many slices each person gets
*/
static bool equalSlices(int totalSlices, int people, int each) {
  return people*each <= totalSlices;
}


int main(int argc, char** argv) {
  int totalSlices = 0, people = 0, each = 0;
  if (argc > 1) {
    totalSlices = atoi(argv[1]);
    people = atoi(argv[2]);
    each = atoi(argv[3]);
  }
  std::cout << equalSlices(totalSlices, people, each) << std::endl;

  return 0;
}



