//
// Created by kde96 on 2023-11-01.
//

#include "MultiThreadAlgorithm.h"

using namespace std;
int MultiThreadAlgorithm::P_Fib(int n) {
  if (n <= 1) {
    return n;
  }

  future<int> x = async([this, n] { return P_Fib(n - 1); });
  int y = P_Fib(n - 2);

  int result = x.get() + y;

  return result;
}
