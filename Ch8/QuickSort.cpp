//
// Created by kde96 on 2023-08-25.
//

#include "QuickSort.h"
#include <cstdlib>
#include <ctime>

void QuickSort::Sort(vector<int> &A, int p, int r) {
  if (p < r) {
    int q = Partition(A, p, r);
    Sort(A, p, q - 1);
    Sort(A, q + 1, r);
  }
}

int QuickSort::Partition(vector<int> &A, int p, int r) {
  int x = A[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i += 1;
      Exchange(A, i, j);
    }
  }
  Exchange(A, i + 1, r);
  return i + 1;
}
void QuickSort::Exchange(vector<int> &A, int targetA, int targetB) {
  int tmp = A[targetA];
  A[targetA] = A[targetB];
  A[targetB] = tmp;
}
int QuickSort::RandomizedPartition(vector<int> &A, int p, int r) {
  int i = rand() % (r - p + 1) + p;
  Exchange(A, r, i);

  return Partition(A, p, r);
}
void QuickSort::RandomizedSort(vector<int> &A, int p, int r) {
  if (p < r) {
    int q = RandomizedPartition(A, p, r);
    RandomizedSort(A, p, q - 1);
    RandomizedSort(A, q + 1, r);
  }
}
