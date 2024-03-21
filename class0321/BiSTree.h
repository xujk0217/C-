#ifndef BISTREE_H
#define BISTREE_H
#include "node.h"
#include <iostream>
using namespace std;

class BiSTree {
    Node *root;
    void PrintSubTree(Node*);
public:
    BiSTree(Node * = NULL);
    void SetRoot(Node*);
    Node* GetRoot();
    bool Insert(int);
    void printTree();
};
#endif