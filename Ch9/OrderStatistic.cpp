//
// Created by kde96 on 2023-08-30.
//

#include "OrderStatistic.h"
int OrderStatistic::Maximum(vector<int> A) {
  int max = A[1];
  for (int i = 2; i < A.size(); i++) {
    if (max < A[i]) {
      max = A[i];
    }
  }
  return max;
}

int OrderStatistic::Minimum(vector<int> A) {
  int min = A[1];
  for (int i = 2; i < A.size(); i++) {
    if (min > A[i]) {
      min = A[i];
    }
  }
  return min;
}
