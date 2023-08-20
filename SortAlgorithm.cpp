//
// Created by kde96 on 2023-08-20.
//

#include "SortAlgorithm.h"
#include <array>
#include <cstdlib>

array<int, ITEM_SIZE> SortAlgorithm::MakeRandArray() {
  std::array<int, ITEM_SIZE> arr;

  arr[0] = -1;
  for (int i = 1; i < ITEM_SIZE; i++) {
    arr[i] = (rand() % (ITEM_SIZE * 10)) + 1;
  }

  return arr;
}
void SortAlgorithm::InsertSort(array<int, ITEM_SIZE> &inArray) {

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
