#include <iostream>
#include <memory>
#include <vector>
#include "SortAlgorithm.h"

using namespace std;

int main() {
  const int ITEM_SIZE = 20; // 배열의 크기를 정의

  unique_ptr<SortAlgorithm> sort_algorithm;
  vector<int> tmpArr = sort_algorithm->MakeRandArray(ITEM_SIZE);
  for (auto v : tmpArr) {
    cout << v << ", ";
  }
  cout << "\n" << endl;

  sort_algorithm->MergeSort(tmpArr, 1, ITEM_SIZE);
  for (auto v : tmpArr) {
    cout << v << ", ";
  }

  return 0;
}