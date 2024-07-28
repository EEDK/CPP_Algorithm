//
// Created by kde96 on 2023-12-25.
//

#ifndef ALGORITHM_CH23_MINIMUMSPANNIN_TREE_MST_H_
#define ALGORITHM_CH23_MINIMUMSPANNIN_TREE_MST_H_

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class MST {
public:
    MST(int vertices);

    void addEdge(int u, int v, int weight);

    void primMST();

    void kruskalMST();

private:
    int find(std::vector<int> &parent, int i);

    void unionSets(std::vector<int> &parent, int x, int y);

    int vertices;
    std::vector<std::vector<int>> graph;
};

#endif //ALGORITHM_CH23_MINIMUMSPANNIN_TREE_MST_H_
