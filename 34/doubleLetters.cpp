/*
  Copyright 2021 Marco Ferraro
*/

#include <math.h>
#include <string>
#include <iostream>

/*
  Create a function that takes a word and return true if the word has two consecutive
  identical letters.

*/

static bool doubleLetters(std::string word) {
  bool doubleLetters = false;
  for (int i = 0; i < (int)word.length(); i++) {
    if (word[i] == word[(i+1) % word.length()]) {
      doubleLetters = true;
      i = word.length();
    }
  }
  return doubleLetters;
}

int main(int argc, char* argv[]) {
  std::string word;
  if (argc > 1) {
    word = argv[1];
  }
  std::cout << doubleLetters(word) << std::endl;

  return 0;
}
