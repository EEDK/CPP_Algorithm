//
// Created by kde96 on 2023-09-11.
//

#ifndef ALGORITHM_CH12_BINARYTREE_H_
#define ALGORITHM_CH12_BINARYTREE_H_
#include "Node.h"

class BinaryTree {
 private:
  Node *root;

  void TransPlant(Node *u, Node *v);

 public:
  BinaryTree();
  Node *getRoot();

  void Insert(int key);
  void Delete(Node *z);

  Node *Minimum(Node *Root);
  Node *Maximum(Node *Root);
  Node *TreeSuccessor(Node *x);

  void Preorder(Node *p);
  void Inorder(Node *p);
  void Postorder(Node *p);

  Node *Search(int key);
};
#endif //ALGORITHM_CH12_BINARYTREE_H_
