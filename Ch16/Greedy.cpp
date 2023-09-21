//
// Created by kde96 on 2023-09-21.
//

#include "Greedy.h"

vector<int> Greedy::GreedyActivitySelector(vector<int> StartTime, vector<int> FinishTime) {
  int n = StartTime.size();
  int k = 0;

  vector<int> result = {0};

  for (int m = 1; m < n; m++) {
    if (StartTime[m] >= FinishTime[k]) {
      result.push_back(m);
      k = m;
    }
  }

  return result;
}
