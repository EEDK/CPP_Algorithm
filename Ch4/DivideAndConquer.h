//
// Created by kde96 on 2023-08-23.
//

#ifndef ALGORITHM__DIVIDEANDCONQUER_H_
#define ALGORITHM__DIVIDEANDCONQUER_H_

#include <vector>

using namespace std;
class DivideAndConquer {
 public:
  vector<vector<int>> MatrixMultiply(vector<vector<int>> A, vector<vector<int>> B);
  vector<vector<int>> SquareMatrixMultiplyRecursive(vector<vector<int>> A, vector<vector<int>> B);
  vector<int> FindMaximumSubArray(vector<int> A, int low, int high);

 private:
  vector<vector<int>> SubtractMatrices(const vector<vector<int>> &A, const vector<vector<int>> &B);
  vector<vector<int>> AddMatrices(const vector<vector<int>> &A, const vector<vector<int>> &B);

  vector<int> FindMaxCrossingSubArray(vector<int> A, int low, int mid, int high);

};
#endif //ALGORITHM__DIVIDEANDCONQUER_H_
