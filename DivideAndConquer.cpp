//
// Created by kde96 on 2023-08-23.
//

#include "DivideAndConquer.h"
vector<vector<int>> DivideAndConquer::MatrixMultiply(vector<vector<int>> A,
                                                     vector<vector<int>> B
) {
  int n = A.size();
  vector<vector<int>> C(n, vector<int>(n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  return C;
}
vector<vector<int>> DivideAndConquer::SquareMatrixMultiplyRecursive(vector<vector<int>> A, vector<vector<int>> B) {
  int n = A.size();
  vector<vector<int>> C(n, vector<int>(n, 0));

  if (n == 1) {
    C[0][0] = A[0][0] * B[0][0];
    return C;
  }

  int new_size = n / 2;

  // A, B, C 행렬을 4개의 부분 행렬로 나누기
  vector<vector<int>> A11(new_size, vector<int>(new_size));
  vector<vector<int>> A12(new_size, vector<int>(new_size));
  vector<vector<int>> A21(new_size, vector<int>(new_size));
  vector<vector<int>> A22(new_size, vector<int>(new_size));

  vector<vector<int>> B11(new_size, vector<int>(new_size));
  vector<vector<int>> B12(new_size, vector<int>(new_size));
  vector<vector<int>> B21(new_size, vector<int>(new_size));
  vector<vector<int>> B22(new_size, vector<int>(new_size));

  for (int i = 0; i < new_size; i++) {
    for (int j = 0; j < new_size; j++) {
      A11[i][j] = A[i][j];
      A12[i][j] = A[i][j + new_size];
      A21[i][j] = A[i + new_size][j];
      A22[i][j] = A[i + new_size][j + new_size];

      B11[i][j] = B[i][j];
      B12[i][j] = B[i][j + new_size];
      B21[i][j] = B[i + new_size][j];
      B22[i][j] = B[i + new_size][j + new_size];
    }
  }

  // 스트라센 행렬 곱셈 알고리즘 수행
  vector<vector<int>> P1 = SquareMatrixMultiplyRecursive(A11, SubtractMatrices(B12, B22));
  vector<vector<int>> P2 = SquareMatrixMultiplyRecursive(AddMatrices(A11, A12), B22);
  vector<vector<int>> P3 = SquareMatrixMultiplyRecursive(AddMatrices(A21, A22), B11);
  vector<vector<int>> P4 = SquareMatrixMultiplyRecursive(A22, SubtractMatrices(B21, B11));
  vector<vector<int>> P5 = SquareMatrixMultiplyRecursive(AddMatrices(A11, A22), AddMatrices(B11, B22));
  vector<vector<int>> P6 = SquareMatrixMultiplyRecursive(SubtractMatrices(A12, A22), AddMatrices(B21, B22));
  vector<vector<int>> P7 = SquareMatrixMultiplyRecursive(SubtractMatrices(A11, A21), AddMatrices(B11, B12));

  for (int i = 0; i < new_size; i++) {
    for (int j = 0; j < new_size; j++) {
      C[i][j] = P5[i][j] + P4[i][j] - P2[i][j] + P6[i][j];
      C[i][j + new_size] = P1[i][j] + P2[i][j];
      C[i + new_size][j] = P3[i][j] + P4[i][j];
      C[i + new_size][j + new_size] = P5[i][j] + P1[i][j] - P3[i][j] - P7[i][j];
    }
  }

  return C;

}

vector<vector<int>> DivideAndConquer::SubtractMatrices(const vector<vector<int>> &A, const vector<vector<int>> &B) {
  int n = A.size();
  vector<vector<int>> result(n, vector<int>(n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      result[i][j] = A[i][j] - B[i][j];
    }
  }

  return result;
}
vector<vector<int>> DivideAndConquer::AddMatrices(const vector<vector<int>> &A, const vector<vector<int>> &B) {
  int n = A.size();
  vector<vector<int>> result(n, vector<int>(n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      result[i][j] = A[i][j] + B[i][j];
    }
  }

  return result;
}

