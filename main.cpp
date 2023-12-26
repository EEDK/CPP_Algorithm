#include "CH22/Graph.h"
#include "Ch16/Greedy.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
  Graph graph(7);

  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(0, 3);
  graph.addEdge(1, 0);
  graph.addEdge(1, 2);
  graph.addEdge(2, 3);
  graph.addEdge(2, 4);
  graph.addEdge(3, 4);
  graph.addEdge(4, 5);
  graph.addEdge(4, 6);

  graph.BFS(0);
  graph.DFS(0);

  Greedy greedy;

  vector<int> inputs{1, 8, 6, 2, 5, 4, 8, 3, 7};
  if (greedy.maxArea(inputs) == 49) {
    cout << "OK" << endl;
  }

  return 0;
}
