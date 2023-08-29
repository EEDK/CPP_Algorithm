//
// Created by kde96 on 2023-08-29.
//

#ifndef ALGORITHM_CH8_LINEARSORT_H_
#define ALGORITHM_CH8_LINEARSORT_H_

#include <vector>

using namespace std;
class LinearSort {

 public:
  vector<int> CountingSort(vector<int> A, int k);
  void RadixSort(vector<int> &A);

 private:
  int GetMaxRadix(const vector<int> A);
};

#endif //ALGORITHM_CH8_LINEARSORT_H_
