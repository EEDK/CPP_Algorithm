//
// Created by kde96 on 2023-08-29.
//

#include "LinearSort.h"
#include <iostream>

vector<int> LinearSort::CountingSort(vector<int> A, int k) {

  vector<int> C(k + 1);
  vector<int> B(A.size());
  B[0] = A[0];

  for (int j = 1; j < A.size(); j++) {
    C[A[j]] += 1;
  }

  for (int i = 1; i <= k; i++) {
    C[i] += C[i - 1];
  }

  for (int j = A.size() - 1; j >= 1; j--) {
    B[C[A[j]]] = A[j];
    C[A[j]] -= 1;
  }

  return B;
}
