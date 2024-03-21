#include "BiSTree.h"   
#include <iostream>
using namespace std;

BiSTree::BiSTree(Node *r) {
    SetRoot(r);
}

void BiSTree::SetRoot(Node* r) {
    root = r;
}

Node* BiSTree::GetRoot() {
    return root;
}

bool BiSTree::Insert(int n) {
    if (root == NULL){
        root = new Node(n);
        return true;
    }
    Node *cur = root;
    while(1){
        if((*cur).GetNum() == n){
            return false;
        }
        if((*cur).GetNum() > n){
            if((*cur).GetLeft() == NULL){
                (*cur).SetLeft(new Node(n));
                return true;
            }
            cur = (*cur).GetLeft();
        }
        else{
            if((*cur).GetRight() == NULL){
                (*cur).SetRight(new Node(n));
                return true;
            }
            cur = (*cur).GetRight();
        }
    }
}

void BiSTree::printTree() {
    if(root == NULL){
        cout << "Empty tree" << endl;
        return;
    }
    PrintSubTree((*root).GetLeft());
    cout << (*root).GetNum() << " ";
    PrintSubTree((*root).GetRight());
    cout << endl;
}

void BiSTree::PrintSubTree(Node *cur) {
    if(cur == NULL){
        return;
    }
    PrintSubTree((*cur).GetLeft());
    cout << (*cur).GetNum() << " ";
    PrintSubTree((*cur).GetRight());
}
