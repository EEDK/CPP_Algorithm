//
// Created by kde96 on 2023-08-20.
//

#ifndef ALGORITHM__SORTALGORITHM_H_
#define ALGORITHM__SORTALGORITHM_H_

#include <array>
const int ITEM_SIZE = 10; // 배열의 크기를 정의

using namespace std;
class SortAlgorithm {

 public:
  array<int, ITEM_SIZE> MakeRandArray();
  void InsertSort(array<int, ITEM_SIZE> &inArray);
  void SelectSort(array<int, ITEM_SIZE> &inArray);

 private:
  int SumArray(array<int, ITEM_SIZE> inArray);
  void Swap(int &num1, int &num2);

};

#endif //ALGORITHM__SORTALGORITHM_H_