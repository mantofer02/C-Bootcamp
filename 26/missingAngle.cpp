/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <math.h>
/*
  You are given 2 out of 3 angles of a triangle, in degrees.

  Write a function that classifies the missing angle as acute, right or 
  obtuse.
*/
static std::string missingAngle(int alpha, int beta) {
  int missing = 180 - (alpha + beta);
  
  if (missing > 90)
    return "obstuse";

  if (missing == 90)
    return "right";

  if (missing > 0 && missing < 90)
    return "acute";

  return "error";
}


int main(int argc, char** argv) {
  int alpha = 0, beta = 0;
  if (argc > 1) {
    alpha = atoi(argv[1]);
    beta = atoi(argv[2]);
  }
  std::cout << missingAngle(alpha, beta) << std::endl;

  return 0;
}
