/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>

/*
  Create a function that accepts an array of numbers and returns the last number
  int the array.
*/

static int lastItem(int* array, int length) {
  return array[length - 1];
}


int main(void) {
  int array[] = {5, 5, 5, 2, 4, 5, 23, 4, 5, 6};
  int length = 10;
  std::cout << lastItem(array, length) << std::endl;

  return 0;
}
