#include <iostream>
#include <memory>
#include "Ch16/Greedy.h"

using namespace std;
int main() {
  unique_ptr<Greedy> greedy = make_unique<Greedy>();

  vector<int> S{1, 3, 0, 5, 3, 5, 6, 7, 8, 2, 12};
  vector<int> F{4, 5, 6, 7, 9, 9, 10, 11, 12, 14, 16};

  vector<int> Result = greedy->GreedyActivitySelector(S, F);

  for (auto it : Result) {
    cout << it << ", ";
  }

  return 0;
}
