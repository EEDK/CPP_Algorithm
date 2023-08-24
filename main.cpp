#include <iostream>
#include <memory>
#include <vector>
#include "HeapSort.h"

using namespace std;

int main() {
  unique_ptr<HeapSort> heap_sort;

  vector<int> a = {-199999, 16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
  heap_sort->MaxHeapify(a, 2);

  for (auto it : a) {
    cout << it << ", ";
  }

  return 0;
}