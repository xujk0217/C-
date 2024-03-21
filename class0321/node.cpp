#include "node.h"
#include <iostream>
using namespace std;

Node::Node(int n, Node* r, Node* l) {
    SetNum(n);
    SetRight(r);
    SetLeft(l);
}
void Node::SetRight(Node* r) {
    right = r;
}
void Node::SetLeft(Node* l) {
    left = l;

}
void Node::SetNum(int n) {
    number = n;
}
Node* Node::GetRight() {
    return right;
}
Node* Node::GetLeft() {
    return left;
}
int Node::GetNum() {
    return number;
}
