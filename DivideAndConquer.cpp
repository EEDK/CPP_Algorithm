//
// Created by kde96 on 2023-08-23.
//

#include "DivideAndConquer.h"
void DivideAndConquer::MatrixMultiply(vector<vector<int>> A,
                                      vector<vector<int>> B,
                                      vector<vector<int>> &C,
                                      int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}
