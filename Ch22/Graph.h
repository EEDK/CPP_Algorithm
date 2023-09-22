//
// Created by kde96 on 2023-09-22.
//

#ifndef ALGORITHM_CH22_GRAPH_H_
#define ALGORITHM_CH22_GRAPH_H_

#include <vector>
#include <queue>

class Graph {
 public:
  Graph(int vertices);
  void addEdge(int u, int v);
  void BFS(int start);

 private:
  int V; // 노드의 개수
  std::vector<std::vector<int>> adj; // 인접 리스트
};

#endif //ALGORITHM_CH22_GRAPH_H_
