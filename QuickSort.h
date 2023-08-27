//
// Created by kde96 on 2023-08-25.
//

#ifndef ALGORITHM__QUICKSORT_H_
#define ALGORITHM__QUICKSORT_H_

#include <vector>

using namespace std;
class QuickSort {
 public:
  void Sort(vector<int> &A, int p, int r);
  void RandomizedSort(vector<int> &A, int p, int r);

 private:
  int Partition(vector<int> &A, int p, int r);
  void Exchange(vector<int> &A, int targetA, int targetB);

  int RandomizedPartition(vector<int> &A, int p, int r);

};

#endif //ALGORITHM__QUICKSORT_H_
