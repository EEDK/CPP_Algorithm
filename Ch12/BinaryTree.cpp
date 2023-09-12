//
// Created by kde96 on 2023-09-11.
//

#include <iostream>
#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree() {
  root = nullptr;
}

Node *BinaryTree::getRoot() {
  return root;
}

void BinaryTree::Insert(int key) {
  Node *t = root;
  Node *p;
  Node *r;

  // root is empty
  if (root == nullptr) {
    p = new Node;
    p->data = key;
    p->lchild = nullptr;
    p->rchild = nullptr;
    root = p;
    return;
  }

  while (t != nullptr) {
    r = t;
    if (key < t->data) {
      t = t->lchild;
    } else if (key > t->data) {
      t = t->rchild;
    } else {
      return;
    }
  }

  // Now t points at NULL and r points at insert location
  p = new Node;
  p->data = key;
  p->lchild = nullptr;
  p->rchild = nullptr;

  if (key < r->data) {
    r->lchild = p;
  } else {
    r->rchild = p;
  }
}

void BinaryTree::Inorder(Node *p) {
  if (p) {
    Inorder(p->lchild);
    cout << p->data << ", " << flush;
    Inorder(p->rchild);
  }
}

Node *BinaryTree::Search(int key) {
  Node *t = root;
  while (t != nullptr) {
    if (key == t->data) {
      return t;
    } else if (key < t->data) {
      t = t->lchild;
    } else {
      t = t->rchild;
    }
  }
  return nullptr;
}
void BinaryTree::Preorder(Node *p) {
  if (p) {
    cout << p->data << ", " << flush;
    Preorder(p->lchild);
    Preorder(p->rchild);
  }
}
void BinaryTree::Postorder(Node *p) {
  if (p) {
    Postorder(p->lchild);
    Postorder(p->rchild);
    cout << p->data << ", " << flush;
  }
}
