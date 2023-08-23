#include <iostream>
#include <memory>
#include <vector>
#include "DivideAndConquer.h"

using namespace std;

int main() {
  unique_ptr<DivideAndConquer> divide_and_conquer;

  vector<int> a = {-199999, 13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
  vector<int> tmp = divide_and_conquer->FindMaximumSubArray(a, 1, 16);

  for (auto it : tmp) {
    cout << it << ", ";
  }

  return 0;
}