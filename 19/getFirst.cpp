/*
  Copyright 2021 Marco Ferraro
*/

#include <vector>
#include <iostream>

int getFirst(std::vector<int> myVector) {
  if (myVector.size()) {
    return myVector[0];
  } else {
    return -1;
  }
}

int getFirst(int* myArray) {
  if (myArray[0]) {return myArray[0];}
  return -1;
}

int main(int argc, char** argv) {
  int* emptyArray;
  int array[] = {343, 5, 432, 6, 9, 0};
  std::vector<int> myVector = {4, 6, 6, 7, 7, 7, 7};

  std::cout << getFirst(emptyArray) << std::endl;
  std::cout << getFirst(array) << std::endl;
  std::cout << getFirst(myVector) << std::endl;

  return 0;
}
