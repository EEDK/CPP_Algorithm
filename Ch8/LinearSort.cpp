//
// Created by kde96 on 2023-08-29.
//

#include "LinearSort.h"
#include <iostream>
#include <algorithm>

vector<int> LinearSort::CountingSort(vector<int> A, int k) {

  vector<int> C(k + 1);
  vector<int> B(A.size());
  B[0] = A[0];

  for (int j = 1; j < A.size(); j++) {
    C[A[j]] += 1;
  }

  for (int i = 1; i <= k; i++) {
    C[i] += C[i - 1];
  }

  for (int j = A.size() - 1; j >= 1; j--) {
    B[C[A[j]]] = A[j];
    C[A[j]] -= 1;
  }

  return B;
}

void LinearSort::RadixSort(vector<int> &A) {
  int Radix = GetMaxRadix(A);
  vector<int> Q;

  for (int d = 1; Radix / d > 0; d *= 10) {
    vector<vector<int>> buckets(10);  // 0부터 9까지의 버킷

    // 배열 A의 각 원소를 현재 자리수에 따라 버킷에 나눠 넣기
    for (int num : A) {
      int digit = (num / d) % 10;
      buckets[digit].push_back(num);
    }

    // 버킷에 들어 있는 원소들을 순서대로 꺼내서 배열 A에 다시 저장
    int idx = 0;
    for (const vector<int> &bucket : buckets) {
      for (int num : bucket) {
        A[idx++] = num;
      }
    }
  }
}

int LinearSort::GetMaxRadix(const vector<int> A) {
  int Radix = 1;

  int MaxValue = *max_element(A.begin(), A.end());
  while (1) {
    if (Radix >= MaxValue) break;
    Radix = Radix * 10;
  }
  return Radix;
}
