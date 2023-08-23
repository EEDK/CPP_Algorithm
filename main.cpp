#include <iostream>
#include <memory>
#include <vector>
#include "DivideAndConquer.h"

using namespace std;

int main() {
  const int ITEM_SIZE = 20; // 배열의 크기를 정의

  unique_ptr<DivideAndConquer> divide_and_conquer;

  vector<vector<int>> arrayA{{1, 2, 3, 4}, {4, 5, 6, 1}, {7, 8, 1, 2}, {1, 2, 3, 4}};
  vector<vector<int>> arrayB{{1, 2, 3, 4}, {4, 5, 6, 1}, {7, 8, 1, 3}, {1, 2, 3, 4}};

  vector<vector<int>> arrayC = divide_and_conquer->SquareMatrixMultiplyRecursive(arrayA, arrayB);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arrayC[i][j] << ", ";
    }
    cout << "\n";
  }

  return 0;
}