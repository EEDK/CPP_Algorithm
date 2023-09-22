cmake_minimum_required(VERSION 3.26)
project(Algorithm)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorithm main.cpp
        SortAlgorithm.h
        SortAlgorithm.cpp
        DivideAndConquer.cpp
        DivideAndConquer.h
        HeapSort.cpp
        HeapSort.h
        QuickSort.cpp
        QuickSort.h
        Ch8/LinearSort.cpp
        Ch8/LinearSort.h
        Ch8/LinearSort.h
        Ch9/OrderStatistic.cpp
        Ch9/OrderStatistic.h
        Ch10/DataStruct.cpp
        Ch10/DataStruct.h
        Ch15/DynamicProgramming.cpp
        Ch15/DynamicProgramming.h
        Ch12/BinaryTree.cpp
        Ch12/BinaryTree.h
        Ch12/Node.h
        Ch16/Greedy.cpp
        Ch16/Greedy.h
        Ch16/Huffman.cpp
        Ch16/Huffman.h
        Ch22/Graph.cpp
        Ch22/Graph.h
)
