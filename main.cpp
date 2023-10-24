#include <iostream>
#include "Ch15/DynamicProgramming.h"
#include <string>

using namespace std;

int main() {
  DynamicProgramming dynamic_programming;

  cout << dynamic_programming.LCSLength("BDCABD", "ABCBDAB") << endl;
  return 0;
}
