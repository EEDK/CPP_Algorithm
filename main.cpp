#include <iostream>
#include <memory>
#include "Ch16/Huffman.h"

using namespace std;
int main() {
  Huffman h;

  h.encoding("effective");
  std::cout << "Encoding Result : " << h.getCode() << std::endl;;
  std::cout << "Decoding Result : " << h.decoding() << std::endl;

  return 0;
}
