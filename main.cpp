#include <iostream>
#include <memory>
#include <vector>
#include "SortAlgorithm.h"

using namespace std;

int main() {
  const int ITEM_SIZE = 20; // 배열의 크기를 정의

  unique_ptr<SortAlgorithm> sort_algorithm;
  vector<int> tmpArr{2, 4, 6, 7, 1, 2, 3, 5};
  for (auto v : tmpArr) {
    cout << v << ", ";
  }
  cout << "\n" << endl;

  sort_algorithm->Merge(tmpArr, 0, 3, 7);
  for (auto v : tmpArr) {
    cout << v << ", ";
  }

  return 0;
}