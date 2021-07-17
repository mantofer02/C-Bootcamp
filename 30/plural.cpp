/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <string.h>

/*
  Create that takes a word and determines whether or not is plural. 
  A plural word is one that ends with "s".
*/

static bool plural(std::string word) {
  return word.back() == 's';
}


int main(int argc, char** argv) {
  std::string word;
  if (argc > 1) {
    word = std::string(argv[1]);
  }
  std::cout << plural(word) << std::endl;

  return 0;
}
