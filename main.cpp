#include <iostream>
#include <memory>
#include <vector>
#include "DivideAndConquer.h"

using namespace std;

int main() {
  const int ITEM_SIZE = 20; // 배열의 크기를 정의

  unique_ptr<DivideAndConquer> divide_and_conquer;

  vector<vector<int>> arrayA{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> arrayB{{4, 1, 2}, {5, 1, 3}, {7, 5, 0}};
  vector<vector<int>> arrayC{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  divide_and_conquer->MatrixMultiply(arrayA, arrayB, arrayC, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arrayC[i][j] << ", ";
    }
    cout << "\n";
  }

  return 0;
}