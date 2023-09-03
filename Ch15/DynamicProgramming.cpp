//
// Created by kde96 on 2023-09-03.
//

#include "DynamicProgramming.h"
#include <climits>

int DynamicProgramming::Max(int a, int b) { return (a > b) ? a : b; }

int DynamicProgramming::CutRod(int prices[], int n) {
  if (n <= 0) {
    return 0;
  }
  int q = INT_MIN;
  for (int i = 0; i < n; i++) {
    q = max(q, prices[i] + CutRod(prices, n - i - 1));
  }
  return q;
}
