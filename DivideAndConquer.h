//
// Created by kde96 on 2023-08-23.
//

#ifndef ALGORITHM__DIVIDEANDCONQUER_H_
#define ALGORITHM__DIVIDEANDCONQUER_H_

#include <vector>

using namespace std;
class DivideAndConquer {
 public:
  void MatrixMultiply(vector<vector<int>> A, vector<vector<int>> B, vector<vector<int>> &C, int n);
  void MatrixMultiplyRecursive(vector<vector<int>> &A,
                               vector<vector<int>> &B,
                               vector<vector<int>> &C,
                               int n,
                               int row_A,
                               int col_A,
                               int row_B,
                               int col_B,
                               int row_C,
                               int col_C);
  void MatrixMultiplyRecursive(vector<vector<int>> &A,
                               vector<vector<int>> &B,
                               vector<vector<int>> &C,
                               int n);

};
#endif //ALGORITHM__DIVIDEANDCONQUER_H_
