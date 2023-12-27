#include <vector>
#include <iostream>
#include "Ch15/MatrixChainMultiply.h"

using namespace std;

int main() {
  MatrixChainMultiply matrix_chain_multiply;
  std::vector<std::vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
  std::vector<std::vector<int>> B = {{7, 8}, {9, 10}, {11, 12}};

  vector<vector<int>> C = matrix_chain_multiply.MatrixMultiply(A, B);

  for (int i = 0; i < C.size(); i++) {
    for (int j = 0; j < C[0].size(); j++) {
      cout << C[i][j] << ", ";
    }
    cout << "\n";
  }
}