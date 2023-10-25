#include <iostream>
#include "Ch15/DynamicProgramming.h"
#include <string>

using namespace std;

int main() {
  DynamicProgramming dynamic_programming;

  cout << dynamic_programming.LIS({3, 1, 5, 3, 7, 9}) << endl;
  return 0;
}
