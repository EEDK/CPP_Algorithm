cmake_minimum_required(VERSION 3.26)
project(Algorithm)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorithm main.cpp
        Ch23_MinimumSpanning_Tree/MST.h
        Ch23_MinimumSpanning_Tree/MST.cpp
        Ch22/Graph.cpp
        Ch22/Graph.h
        Ch16/Greedy.h
        Ch16/Greedy.cpp
)