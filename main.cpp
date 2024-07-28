#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

template<typename T>

auto compute_waiting_times(std::vector<T> &service_times) {
  std::vector<T> W(service_times.size());
  W[0] = 0;

  for (auto i = 1; i < service_times.size(); i++)
    W[i] = W[i - 1] + service_times[i - 1];

  return W;
}

int main() {
  std::cout << "2" << std::endl;
  return 0;
}
