/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>

// A gamble is profitable is probToWinf * prize is bigger than admission
static bool profitableGamble(float probToWin, int prize, float pay) {
  return probToWin * prize > pay;
}

int main(void) {
  
  std::cout << profitableGamble((5.0/100.0), 10000, 5) << std::endl;

  return 0;
}
