/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <string.h>
#include <vector>

/*
  Create a function that adds a string ending to each member of an 
  array
*/

static std::vector<std::string> endings(std::vector<std::string> word_array, std::string ending) {
  for (auto &word : word_array) {
    word.append(ending);
  }
  return word_array;
}

int main(void) {
  std::string ending("er");
  std::vector<std::string> word_array = {"tree", "apple", "cucumber"};


  // ending(word_array, ending);



  word_array = endings(word_array, ending);

  for (auto word : word_array) {
    std::cout << word << std::endl;
  }

  return 0;
}
