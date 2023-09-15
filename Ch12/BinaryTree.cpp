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
    p->parent = nullptr;

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
  p->parent = r;

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

// Node -> Root
Node *BinaryTree::Minimum(Node *Root) {

  while (Root->lchild != nullptr) {
    Root = Root->lchild;
  }
  return Root;
}
Node *BinaryTree::Maximum(Node *Root) {
  while (Root->rchild != nullptr) {
    Root = Root->rchild;
  }

  return Root;
}
Node *BinaryTree::TreeSuccessor(Node *x) {
  if (x->rchild != nullptr)
    return Minimum(x->rchild);

  Node *y = x->parent;
  while (y != nullptr && x == y->rchild) {
    x = y;
    y = y->parent;
  }

  return y;
}
void BinaryTree::TransPlant(Node *u, Node *v) {
  if (u->parent == nullptr)
    root = v;
  else if (u == u->parent->lchild)
    u->parent->lchild = v;
  else
    u->parent->rchild = v;

  if (v != nullptr)
    v->parent = u->parent;
}

void BinaryTree::Delete(Node *z) {
  if (z->lchild == nullptr)
    TransPlant(z, z->rchild);
  else if (z->rchild == nullptr)
    TransPlant(z, z->lchild);
  else {
    Node *y = Minimum(z->rchild);
    if (y->parent != z) {
      TransPlant(y, y->rchild);
      y->rchild = z->rchild;
      y->rchild->parent = y;
    }
    TransPlant(z, y);
    y->lchild = z->lchild;
    y->lchild->parent = y;
  }

  delete z;
}

