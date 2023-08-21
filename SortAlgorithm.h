//
// Created by kde96 on 2023-08-20.
//

#ifndef ALGORITHM__SORTALGORITHM_H_
#define ALGORITHM__SORTALGORITHM_H_

#include <vector>

using namespace std;
class SortAlgorithm {

 public:
  vector<int> MakeRandArray(int Size);
  void InsertSort(vector<int> &inArray);
  void SelectSort(vector<int> &inArray);
  void MergeSort(vector<int> &inArray, int p, int r);

 private:
  int SumArray(vector<int> &inArray);
  void Merge(vector<int> &inArray, int p, int q, int r);
};

#endif //ALGORITHM__SORTALGORITHM_H_
