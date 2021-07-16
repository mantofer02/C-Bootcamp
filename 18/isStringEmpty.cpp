/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>

bool isStringEmpty(std::string myString) {
  return myString.empty();
}

int main(int argc, char** argv) {
  std::string myString;
  if (argc > 1) {
    myString = std::string(argv[1]);
  }
  std::cout << isStringEmpty(myString) << std::endl;
  std::cout << myString << std::endl;
  return 0;
}
