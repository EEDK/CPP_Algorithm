//
// Created by kde96 on 2023-09-03.
//

#ifndef ALGORITHM_CH15_DYNAMICPROGRAMMING_H_
#define ALGORITHM_CH15_DYNAMICPROGRAMMING_H_
#include <vector>

using namespace std;
class DynamicProgramming {
 public:
  int CutRod(int prices[], int n);

 private:
  int Max(int a, int b);
};

#endif //ALGORITHM_CH15_DYNAMICPROGRAMMING_H_
