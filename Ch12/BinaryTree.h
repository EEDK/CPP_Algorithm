//
// Created by kde96 on 2023-09-11.
//

#ifndef ALGORITHM_CH12_BINARYTREE_H_
#define ALGORITHM_CH12_BINARYTREE_H_
#include "Node.h"

class BinaryTree {
 private:
  Node *root;

 public:
  BinaryTree();
  Node *getRoot();
  void Insert(int key);
  void Inorder(Node *p);
  Node *Search(int key);
};
#endif //ALGORITHM_CH12_BINARYTREE_H_
