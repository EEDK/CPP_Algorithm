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

void DivideAndConquer::MatrixMultiplyRecursive(vector<vector<int>> &A,
                                               vector<vector<int>> &B,
                                               vector<vector<int>> &C,
                                               int n,
                                               int row_A,
                                               int col_A,
                                               int row_B,
                                               int col_B,
                                               int row_C,
                                               int col_C) {
  if (n == 1) {
    C[row_C][col_C] = C[row_C][col_C] + A[row_A][col_A] * B[row_B][col_B];
    return;
  }

  int new_size = n / 2;

  // A, B, C를 n/2 x n/2 부분 행렬로 분할하여 재귀 호출
  MatrixMultiplyRecursive(A, B, C, new_size, row_A, col_A, row_B, col_B, row_C, col_C);
  MatrixMultiplyRecursive(A, B, C, new_size, row_A, col_A + new_size, row_B + new_size, col_B, row_C, col_C);
  MatrixMultiplyRecursive(A, B, C, new_size, row_A, col_A, row_B, col_B + new_size, row_C, col_C + new_size);
  MatrixMultiplyRecursive(A,
                          B,
                          C,
                          new_size,
                          row_A,
                          col_A + new_size,
                          row_B + new_size,
                          col_B + new_size,
                          row_C,
                          col_C + new_size);

  MatrixMultiplyRecursive(A, B, C, new_size, row_A + new_size, col_A, row_B, col_B, row_C + new_size, col_C);
  MatrixMultiplyRecursive(A,
                          B,
                          C,
                          new_size,
                          row_A + new_size,
                          col_A + new_size,
                          row_B + new_size,
                          col_B,
                          row_C + new_size,
                          col_C);
  MatrixMultiplyRecursive(A,
                          B,
                          C,
                          new_size,
                          row_A + new_size,
                          col_A,
                          row_B,
                          col_B + new_size,
                          row_C + new_size,
                          col_C + new_size);
  MatrixMultiplyRecursive(A,
                          B,
                          C,
                          new_size,
                          row_A + new_size,
                          col_A + new_size,
                          row_B + new_size,
                          col_B + new_size,
                          row_C + new_size,
                          col_C + new_size);
}

void DivideAndConquer::MatrixMultiplyRecursive(vector<vector<int>> &A,
                                               vector<vector<int>> &B,
                                               vector<vector<int>> &C,
                                               int n) {
  MatrixMultiplyRecursive(A, B, C, n, 0, 0, 0, 0, 0, 0);
}