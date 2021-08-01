/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>

/*
  Create a function that returns the ASCII value of the passed character
*/
static unsigned short ctoa(char myChar) {
  return (myChar - 'A') + 65;
}


int main(int argc, char** argv) {
  char myChar = ' ';
  if (argc > 1) {
    myChar = *argv[1];
  }
  std::cout << ctoa(myChar) << std::endl;

  return 0;
}
