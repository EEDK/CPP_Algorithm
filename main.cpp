#include <iostream>
#include <memory>
#include <vector>
#include "Ch15/DynamicProgramming.h"

using namespace std;

int main() {
  unique_ptr<DynamicProgramming> dynamic_programming;

  int a[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

  dynamic_programming->PrintCutRodSolution(a, 9);

  return 0;
}