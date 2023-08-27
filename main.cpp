#include <iostream>
#include <memory>
#include <vector>
#include "QuickSort.h"

using namespace std;

int main() {
  unique_ptr<QuickSort> quick_sort;

  vector<int> a = {-199999, 4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
  quick_sort->RandomizedSort(a, 1, 10);

  for (auto it : a) {
    cout << it << ", ";
  }

  return 0;
}