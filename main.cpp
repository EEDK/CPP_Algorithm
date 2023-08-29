#include <iostream>
#include <memory>
#include <vector>
#include "Ch8/LinearSort.h"

using namespace std;

int main() {
  unique_ptr<LinearSort> linear_sort;

  vector<int> a = {-1999, 2, 5, 3, 0, 2, 3, 0, 3};

  vector<int> b = linear_sort->CountingSort(a, 5);

  for (auto it : b) {
    cout << it << ", ";
  }

  return 0;
}