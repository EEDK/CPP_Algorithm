#include <iostream>
#include <memory>
#include <vector>
#include "HeapSort.h"

using namespace std;

int main() {
  unique_ptr<HeapSort> heap_sort;

  vector<int> a = {-199999, 4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
  heap_sort->Sort(a);

  for (auto it : a) {
    cout << it << ", ";
  }

  return 0;
}