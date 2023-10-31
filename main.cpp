#include <iostream>
#include "Ch22/Graph.h"
#include <string>

using namespace std;

int main() {
  Graph graph(8);

  graph.addEdge(0, 1);
  graph.addEdge(1, 2);
  graph.addEdge(2, 3);
  graph.addEdge(3, 4);
  graph.addEdge(3, 5);
  graph.addEdge(4, 6);
  graph.addEdge(5, 6);
  graph.addEdge(5, 7);

  graph.DFS(2);

  return 0;
}
