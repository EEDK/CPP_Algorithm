//
// Created by kde96 on 2023-08-24.
//

#include "HeapSort.h"

void HeapSort::MaxHeapify(vector<int> &A, int i) {
  int l = left(i);
  int r = right(i);
  const int heapSize = A.size();

  int largest = i;

  if (l < heapSize && A[l] > A[i]) {
    largest = l;
  }

  if (r < heapSize && A[r] > A[largest]) {
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

void HeapSort::BuildMaxHeap(vector<int> &A) {
  const int heapSize = A.size();
  for (int i = heapSize / 2; i > 0; i--) {
    MaxHeapify(A, i);
  }
}

void HeapSort::Sort(vector<int> &A) {
  BuildMaxHeap(A);
  vector<int> temp;

  for (int i = A.size(); i > 1; i--) {
    Exchange(A, 1, A.size() - 1);
    temp.push_back(A[A.size() - 1]);
    A.resize(A.size() - 1);
    MaxHeapify(A, 1);
  }

  for (int i = temp.size() - 1; i >= 0; i--) {
    A.push_back(temp[i]);
  }
}