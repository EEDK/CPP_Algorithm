#include <iostream>
#include <memory>
#include "Ch12/BinaryTree.h"

using namespace std;
int main() {
  unique_ptr<BinaryTree> binaryTree = make_unique<BinaryTree>();

  binaryTree->Insert(10);
  binaryTree->Insert(5);
  binaryTree->Insert(20);
  binaryTree->Insert(8);
  binaryTree->Insert(30);

  cout << "1";
  binaryTree->Postorder(binaryTree->getRoot());

  return 0;
}
