#include <iostream>
#include "Ch23_MinimumSpanning_Tree/MST.h"

using namespace std;

int main() {
  // Create a graph with 4 vertices
  MST mst(4);

  // Add edges to the graph
  mst.addEdge(0, 1, 2);
  mst.addEdge(0, 2, 3);
  mst.addEdge(1, 2, 1);
  mst.addEdge(1, 3, 4);
  mst.addEdge(2, 3, 5);

  // Find and print the minimum spanning tree using Prim's algorithm
  std::cout << "Prim's Algorithm:\n";
  mst.primMST();

  std::cout << "\n--------------------------------\n";

  // Find and print the minimum spanning tree using Kruskal's algorithm
  std::cout << "Kruskal's Algorithm:\n";
  mst.kruskalMST();

  return 0;
}
