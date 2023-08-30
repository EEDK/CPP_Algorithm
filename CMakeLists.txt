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
        Ch9/OrderStatistic.h)
