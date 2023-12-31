//
// Created by kde96 on 2023-09-21.
//

#ifndef ALGORITHM_CH16_GREEDY_H_
#define ALGORITHM_CH16_GREEDY_H_

#include <vector>

using namespace std;
class Greedy {

 public:
  vector<int> GreedyActivitySelector(vector<int> StartTime, vector<int> FinishTime);

  // https://leetcode.com/problems/container-with-most-water/
  int maxArea(vector<int> &height);

};

#endif //ALGORITHM_CH16_GREEDY_H_
