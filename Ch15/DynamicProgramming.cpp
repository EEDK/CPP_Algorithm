//
// Created by kde96 on 2023-09-03.
//

#include "DynamicProgramming.h"
#include <climits>

using namespace std;
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

int DynamicProgramming::MemoizedCutRod(int p[], int n) {
  int r[n + 1];

  for (int i = 0; i <= n; i++)
    r[i] = INT_MIN;

  return MemoizedCutRodAux(p, n, r);
}
int DynamicProgramming::MemoizedCutRodAux(int p[], int n, int r[]) {
  if (r[n] >= 0)
    return r[n];
  int q;
  if (n == 0)
    q = 0;
  else {
    q = INT_MIN;
    for (int i = 0; i < n; i++)
      q = max(q, p[i] + MemoizedCutRodAux(p, n - i - 1, r));
  }
  
  r[n] = q;
  return q;
}
