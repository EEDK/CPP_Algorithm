//
// Created by kde96 on 2023-09-22.
//

#include "Graph.h"
#include <iostream>

using namespace std;
Graph::Graph(int vertices) : V(vertices) {
  adj.resize(V);
}

void Graph::addEdge(int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void Graph::BFS(int start) {
  vector<bool> visited(V, false);
  queue<int> q;

  visited[start] = true;
  q.push(start);

  cout << "BFS Order: ";

  while (!q.empty()) {
    int current = q.front();
    cout << current << " ";
    q.pop();

    // 현재 노드와 연결된 모든 미방문 노드를 큐에 추가
    for (int neighbor : adj[current]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }

  cout << endl;
}
void Graph::DFS(int start) {
  vector<bool> visited(V, false);
  stack<int> s;

  visited[start] = true;
  s.push(start);

  cout << "DFS Order: ";

  while (!s.empty()) {
    int current = s.top();
    cout << current << " ";
    s.pop();

    for (int neighbor : adj[current]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        s.push(neighbor);
      }
    }
  }

  cout << endl;
}
