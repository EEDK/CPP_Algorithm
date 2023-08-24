//
// Created by kde96 on 2023-08-24.
//

#ifndef ALGORITHM__HEAPSORT_H_
#define ALGORITHM__HEAPSORT_H_

#include <vector>

using namespace std;

class HeapSort {
 public:
  void MaxHeapify(vector<int> &A, int i);
 private:
  void Exchange(vector<int> &A, int targetA, int targetB);

  inline int Parent(int i) { return i / 2; }
  inline int left(int i) { return 2 * i; }
  inline int right(int i) { return 2 * i + 1; }
};

#endif //ALGORITHM__HEAPSORT_H_
