//
// Created by kde96 on 2023-08-24.
//

#include "HeapSort.h"
void HeapSort::MaxHeapify(vector<int> &A, int i) {
  int l = left(i);
  int r = right(i);
  const int heapSize = A.size();

  int largest;

  if (l <= heapSize && A[l] > A[i]) {
    largest = l;
  } else {
    largest = i;
  }

  if (r <= heapSize && A[r] > A[largest]) {
    largest = r;
  }

  if (largest != i) {
    Exchange(A, i, largest);
    MaxHeapify(A, largest);
  }

}
void HeapSort::Exchange(vector<int> &A, int targetA, int targetB) {
  int tmp = A[targetA];
  A[targetA] = A[targetB];
  A[targetB] = tmp;
}
