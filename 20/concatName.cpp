/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>

static std::string concatName(std::string first, std::string second) {
  return first + ", " + second;
}


int main(int argc, char** argv) {
  std::string first, second;
  if (argc > 1) {
    first = std::string(argv[1]);
    second = std::string(argv[2]);
  }
  std::cout << concatName(first, second) << std::endl;

  return 0;
}
