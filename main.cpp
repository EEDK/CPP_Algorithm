#include <iostream>
#include <memory>
#include <vector>
#include "Ch15/DynamicProgramming.h"

using namespace std;

int main() {
  unique_ptr<DynamicProgramming> dynamic_programming;

  vector<int> a = {-1999, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

  cout << dynamic_programming->CutRod(a, 5);

  return 0;
}