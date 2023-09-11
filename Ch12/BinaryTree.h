//
// Created by kde96 on 2023-09-11.
//

#ifndef ALGORITHM_CH12_BINARYTREE_H_
#define ALGORITHM_CH12_BINARYTREE_H_

class BinaryTree {
 public:
  struct Tree {
    int key;
    Tree *Left;
    Tree *Right;
  };

  void InorderTreeWalk(Tree *x);

 private:
  Tree *Root;
};

#endif //ALGORITHM_CH12_BINARYTREE_H_
