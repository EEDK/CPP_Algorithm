#include <iostream>
#include <memory>
#include <vector>
#include "Ch8/LinearSort.h"

using namespace std;

int main() {
  unique_ptr<LinearSort> linear_sort;

  vector<int> a = {-1999, 170, 45, 75, 90, 802, 24, 2, 66};

  linear_sort->RadixSort(a);

  for (auto it : a) {
    cout << it << ", ";
  }

  return 0;
}