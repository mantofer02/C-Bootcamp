/*
  Copyright 2021 Marco Ferraro
*/

#include <string>
#include <iostream>
#include <vector>

/*
  Create a function that goes through the array, incrementing (+1) for each odd
  number and decrementing (-1) for each even number.
*/

static void transform(std::vector<int>* myVector)
{
  for (auto it = myVector->begin(); it != myVector->end(); it++)
  {
    if (*it % 2 == 0)
    {
      *it += 1;
    }
    else
    {
      *it -= 1;
    }
  }
}

static void print(std::vector<int> myVector)
{
  for (auto i : myVector)
  {
    std::cout << i << std::endl;
  }
}

int main(void)
{
  FILE *input = stdin;
  // FILE* output = stdout;
  std::vector<int> inputArray;
  int n;

  while (fscanf(input, "%d", &n) == 1)
  {
    inputArray.push_back(n);
  }

  transform(&inputArray);
  print(inputArray);

  return 0;
}
