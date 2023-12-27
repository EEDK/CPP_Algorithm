//
// Created by kde96 on 2023-12-27.
//

#include "MatrixChainMultiply.h"

vector<vector<int>> MatrixChainMultiply::MatrixMultiply(vector<vector<int>> A, vector<vector<int>> B) {
  if (A.empty() || B.empty() || A[0].size() != B.size()) {
    return vector<vector<int>>();
  }

  size_t rowsA = A.size();
  size_t colsA = A[0].size();
  size_t rowsB = B.size();
  size_t colsB = B[0].size();

  // C 행렬을 A의 행 * B의 열 크기로 생성
  vector<vector<int>> C(rowsA, vector<int>(colsB, 0));

  for (size_t i = 0; i < rowsA; i++) {
    for (size_t j = 0; j < colsB; j++) {
      for (size_t k = 0; k < colsA; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  return C;
}

