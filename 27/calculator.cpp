/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <math.h>
/*
  Create a function that takes two numbers and a mathematical operator and will
  perform a calculation with the given numbers
*/

static int calculate(int num1, char op, int num2) {
  int result = -1;

  switch (op)
  {
  case '+':
    result = num1 + num2;
    break;

  case '-':
    result = num1 - num2;
    break;

  case 'x':
    std::cout << "calculate" << std::endl;
    result = num1 * num2;
    break;

  case '/':
    result = num1 / num2;
    break;

  default:
    break;
  }
  return result;
}


int main(int argc, char** argv) {
  int num1 = 0, num2 = 0;
  char op = ' ';
  if (argc > 1) {
    num1 = atoi(argv[1]);
    op = *argv[2];
    num2 = atoi(argv[3]);
  }
  std::cout << calculate(num1, op, num2) << std::endl;

  return 0;
}
