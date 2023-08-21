//
// Created by kde96 on 2023-08-20.
//

#include "SortAlgorithm.h"
#include <cstdlib>
#include <vector>

vector<int> SortAlgorithm::MakeRandArray(int Size) {
  vector<int> arr(Size);

  arr[0] = -1;
  for (int i = 1; i < Size; i++) {
    arr[i] = (rand() % (Size * 10)) + 1;
  }

  return arr;
}

void SortAlgorithm::InsertSort(vector<int> &inArray) {
  int ITEM_SIZE = inArray.size();

  for (int i = 2; i < ITEM_SIZE; i++) {
    int key = inArray[i];

    int j = i - 1;
    while (j > 0 && inArray[j] > key) {
      inArray[j + 1] = inArray[j];
      j = j - 1;
    };
    inArray[j + 1] = key;
  }
}
void SortAlgorithm::SelectSort(vector<int> &inArray) {
  int ITEM_SIZE = inArray.size();

  for (int i = 1; i < ITEM_SIZE; i++) {
    int minIdx = i;
    for (int j = i + 1; j < ITEM_SIZE; j++) {
      if (inArray[minIdx] > inArray[j]) {
        minIdx = j;
      }
    }
    int tmp = inArray[i];
    inArray[i] = inArray[minIdx];
    inArray[minIdx] = tmp;
  }
}

int SortAlgorithm::SumArray(vector<int> &inArray) {
  int sum = 0;
  int ITEM_SIZE = inArray.size();

  for (int i = 1; i < ITEM_SIZE; i++) {
    sum += inArray[i];
  }

  return sum;
}
void SortAlgorithm::Merge(vector<int> &inArray, int p, int q, int r) {
  int lengthLeft = q - p + 1;
  int lengthRight = r - q;

  vector<int> LArray(lengthLeft);
  vector<int> RArray(lengthRight);

  for (int i = 0; i < lengthLeft; i++) {
    LArray[i] = inArray[p + i];
  }

  for (int j = 0; j < lengthRight; j++) {
    RArray[j] = inArray[q + j + 1];
  }

  int i = 0;
  int j = 0;
  int k = p;

  while (i < lengthLeft && j < lengthRight) {
    if (LArray[i] <= RArray[j]) {
      inArray[k] = LArray[i];
      i += 1;
    } else {
      inArray[k] = RArray[j];
      j += 1;
    }
    k = k + 1;
  }

  while (i < lengthLeft) {
    inArray[k] = LArray[i];
    i = i + 1;
    k = k + 1;
  }

  while (j < lengthRight) {
    inArray[k] = RArray[j];
    j = j + 1;
    k = k + 1;
  }
}
