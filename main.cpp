#include <iostream>
#include "Ch22/Graph.h"

using namespace std;

int main() {
  // 예시 그래프 생성
  Graph graph(6);
  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(1, 3);
  graph.addEdge(1, 4);
  graph.addEdge(2, 4);
  graph.addEdge(3, 5);

  int startNode = 0;

  cout << "Start Node: " << startNode << endl;
  graph.BFS(startNode);

  return 0;
}
