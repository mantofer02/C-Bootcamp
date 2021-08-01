/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <math.h>

/*
  For each 6 cups I buy, I get a 7th cup free. Create a function 
  that take n cups bought and return the total of cups I would get.

*/

static int coffeeCups(int n) {
  n+= (int)floor(n/6);
  return n;
}

int main(int argc, char* argv[]) {
  int n = 0;
  if (argc > 1) {
    n = atoi(argv[1]);
  }

  std::cout << coffeeCups(n) << std::endl;

  return 0;
}
