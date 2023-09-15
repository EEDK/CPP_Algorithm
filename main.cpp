#include <iostream>
#include <memory>
#include "Ch12/BinaryTree.h"

using namespace std;
int main() {
  unique_ptr<BinaryTree> binaryTree = make_unique<BinaryTree>();

  binaryTree->Insert(10);
  binaryTree->Insert(90);
  binaryTree->Insert(20);
  binaryTree->Insert(80);
  binaryTree->Insert(30);
  binaryTree->Insert(70);

  cout << "BST Min : " << binaryTree->Minimum(binaryTree->getRoot())->data << endl;
  cout << "BST Max : " << binaryTree->Maximum(binaryTree->getRoot())->data << endl;
  cout << "20 Successor : " << binaryTree->TreeSuccessor(binaryTree->Search(20))->data << endl;
  cout << "30 Parent : " << binaryTree->Search(30)->parent->data << endl;
  binaryTree->Delete(binaryTree->Search(30));
  if (binaryTree->Search(30) == nullptr) {
    cout << " Not Found " << endl;
  }

  return 0;
}
