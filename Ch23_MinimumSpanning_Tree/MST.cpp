//
// Created by kde96 on 2023-12-25.
//
#include "MST.h"

MST::MST(int vertices) : vertices(vertices) {
  // Initialize the graph with all elements set to 0 (no edges)
  graph.resize(vertices, std::vector<int>(vertices, 0));
}

void MST::addEdge(int u, int v, int weight) {
  // Add an undirected edge to the graph
  graph[u][v] = weight;
  graph[v][u] = weight;
}

void MST::primMST() {
  // Create arrays to store constructed MST
  std::vector<int> parent(vertices, -1);  // To store the constructed MST
  std::vector<int> key(vertices, INT_MAX); // Key values used to pick minimum weight edge

  // Include the first vertex in MST
  key[0] = 0;
  parent[0] = -1; // First node is always the root of MST

  // MST will have V vertices
  for (int count = 0; count < vertices - 1; ++count) {
    // Pick the minimum key vertex from the set of vertices not yet included in MST
    int u = -1;
    for (int v = 0; v < vertices; ++v) {
      if (key[v] != -1 && (u == -1 || key[v] < key[u])) {
        u = v;
      }
    }

    // Add the picked vertex to the MST
    key[u] = -1;
    for (int v = 0; v < vertices; ++v) {
      if (graph[u][v] && key[v] != -1 && graph[u][v] < key[v]) {
        parent[v] = u;
        key[v] = graph[u][v];
      }
    }
  }

  // Print the constructed MST
  std::cout << "Edge \tWeight\n";
  for (int i = 1; i < vertices; ++i) {
    std::cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << "\n";
  }
}
void MST::kruskalMST() {
  // Implementation of Kruskal's algorithm
  std::vector<std::pair<int, std::pair<int, int>>> edges;

  // Add all edges to the vector
  for (int i = 0; i < vertices; ++i) {
    for (int j = i + 1; j < vertices; ++j) {
      if (graph[i][j] != 0) {
        edges.push_back({graph[i][j], {i, j}});
      }
    }
  }

  // Sort the edges based on weight
  std::sort(edges.begin(), edges.end());

  // Allocate memory for parent array
  std::vector<int> parent(vertices, -1);

  // Initialize the number of edges to be taken
  int edgesTaken = 0;

  // Result vector to store the edges of the MST
  std::vector<std::pair<int, std::pair<int, int>>> result;

  // Iterate through all sorted edges
  for (const auto &edge : edges) {
    int u = edge.second.first;
    int v = edge.second.second;

    int setU = find(parent, u);
    int setV = find(parent, v);

    // If including this edge doesn't cause a cycle, add it to the result
    if (setU != setV) {
      result.push_back(edge);
      unionSets(parent, setU, setV);
      ++edgesTaken;
    }

    // Stop if we have added enough edges to form the MST
    if (edgesTaken == vertices - 1) {
      break;
    }
  }

  // Print the constructed MST
  std::cout << "Edge \tWeight\n";
  for (const auto &edge : result) {
    std::cout << edge.second.first << " - " << edge.second.second << "\t" << edge.first << "\n";
  }
}

int MST::find(std::vector<int> &parent, int i) {
  if (parent[i] == -1) {
    return i;
  }
  return find(parent, parent[i]);
}

void MST::unionSets(std::vector<int> &parent, int x, int y) {
  int rootX = find(parent, x);
  int rootY = find(parent, y);
  parent[rootX] = rootY;
}
