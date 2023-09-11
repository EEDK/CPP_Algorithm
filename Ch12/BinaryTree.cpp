//
// Created by kde96 on 2023-09-11.
//

#include <iostream>
#include "BinaryTree.h"

void BinaryTree::InorderTreeWalk(BinaryTree::Tree *x) {
  InorderTreeWalk(x->Left);
  std::cout << x->key;
  InorderTreeWalk(x->Right);
}