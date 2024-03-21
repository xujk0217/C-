#include <iostream>
#include "BiSTree.h"
using namespace std;

int main() {
    BiSTree tree;
    tree.printTree();
    tree.Insert(15);
    tree.printTree();
    tree.Insert(3);
    tree.printTree();
    tree.Insert(1);
    tree.printTree();
    tree.Insert(17);
    tree.Insert(20);
    tree.Insert(18);
    tree.Insert(16);
    tree.printTree();
    
    return 0;
}