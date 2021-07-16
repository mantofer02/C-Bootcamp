/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>

static bool areSameSize(std::string first, std::string second) {
  return first.size() == second.size();
}


int main(int argc, char** argv) {
  std::string first, second;
  if (argc > 1) {
    first = std::string(argv[1]);
    second = std::string(argv[2]);
  }
  std::cout << areSameSize(first, second) << std::endl;

  return 0;
}
