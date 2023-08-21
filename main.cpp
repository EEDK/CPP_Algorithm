#include <iostream>
#include <memory>
#include <array>
#include "SortAlgorithm.h"

using namespace std;

int main() {
  const int ITEM_SIZE = 10; // 배열의 크기를 정의

  unique_ptr<SortAlgorithm> sort_algorithm;
  array<int, ITEM_SIZE> tmpArr = sort_algorithm->MakeRandArray();
  for (auto v : tmpArr) {
    cout << v << ", ";
  }
  cout << "\n" << endl;

  sort_algorithm->SelectSort(tmpArr);
  for (auto v : tmpArr) {
    cout << v << ", ";
  }

  return 0;
}