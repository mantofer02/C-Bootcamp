/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <string.h>
#include <vector>

/*
  Create a function that takes the last number of a consecutive
  list of numbers and return the total of all number up to
  and including it.

  Challenge: Recursive Algorithm

  Hint: this is gauss' sum

  n(n+1)/2, but I decided to make it recursive to practice

*/

static int addUpTo(int n) {
  if (n == 1 || n == 0) {
    return n;
  } else {
    n += addUpTo (n-1);
    return n;
  }
}


int main(int argc, char* argv[]) {
  int n = 0;
  if (argc > 1) {
    n = atoi(argv[1]);
  }
  
  std::cout << addUpTo(n) << std::endl;
  
  return 0;
}
