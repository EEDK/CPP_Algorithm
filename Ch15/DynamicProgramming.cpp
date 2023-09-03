//
// Created by kde96 on 2023-09-03.
//

#include "DynamicProgramming.h"
#include <climits>
const int INF = INT_MIN;

int DynamicProgramming::CutRod(vector<int> p, int n) {
  if (n == 0) {
    return 0;
  }
  int q = -INF;
  for (int i = 1; i <= n; i++) {
    int tempQ = p[i] + CutRod(p, n - 1);
    if (tempQ > q) {
      q = tempQ;
    }
  }

  return q;
}
