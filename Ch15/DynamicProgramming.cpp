//
// Created by kde96 on 2023-09-03.
//

#include "DynamicProgramming.h"
#include <climits>
#include <iostream>
#include <algorithm>

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

int DynamicProgramming::BottomUPCutRod(int *p, int n) {
  int r[n + 1];
  r[0] = 0;
  int q;
  for (int j = 1; j <= n; j++) {
    q = INT_MIN;
    for (int i = 0; i < j; i++) {
      q = max(q, p[i] + r[j - i - 1]);
    }
    r[j] = q;
  }

  return r[n];
}

void DynamicProgramming::ExtendBottomUpCutRod(int p[], int n, int r[], int s[]) {
  int q;

  r[0] = 0;
  s[0] = 0;
  for (int j = 1; j <= n; j++) {
    q = INT_MIN;
    for (int i = 1; i <= j; i++) {
      if (q < (p[i - 1] + r[j - i])) {
        q = p[i - 1] + r[j - i];
        s[j] = i;
      }
    }
    r[j] = q;
  }
}

void DynamicProgramming::PrintCutRodSolution(int p[], int n) {
  int r[n + 1];
  int s[n + 2];

  ExtendBottomUpCutRod(p, n, r, s);
  while (n > 0) {
    cout << "cut(s) : " << s[n] << ", max obtainable profit is " << r[s[n]] << endl;
    n = n - s[n];
  }
}
int DynamicProgramming::FibonacciNumber(int n) {
  int S[n + 1];

  S[0] = 0;
  S[1] = 1;

  FibonacciNumberDynamic(n, S);

  return S[n];
}

void DynamicProgramming::FibonacciNumberDynamic(int n, int *s) {
  for (int i = 2; i <= n; i++) {
    s[i] = s[i - 2] + s[i - 1];
  }
}

int DynamicProgramming::LCSLength(string X, string Y) {
  int m = X.length();
  int n = Y.length();

  vector<std::vector<int>> dp(m + 1, vector<int>(n + 1, 0));

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (X[i - 1] == Y[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  return dp[m][n];
}


