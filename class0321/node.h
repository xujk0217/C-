#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node {
    int number;
    Node *right, *left;
public:
    Node(int, Node* = NULL, Node* = NULL);
    void SetRight(Node*);
    void SetLeft(Node*);
    void SetNum(int);

    Node* GetRight();
    Node* GetLeft();
    int GetNum();
};

#endif