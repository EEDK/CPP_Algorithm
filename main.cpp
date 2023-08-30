#include <iostream>
#include <memory>
#include <vector>
#include "Ch9/OrderStatistic.h"

using namespace std;

int main() {
  unique_ptr<OrderStatistic> order_statistic;

  vector<int> a = {-1999, 170, 45, 75, 90, 802, 24, 66, 2};

  cout << "Maximum is " << order_statistic->Maximum(a);

  return 0;
}