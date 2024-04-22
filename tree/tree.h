#ifndef _TREE_H_
#define _TREE_H_

#include<iostream>
#include"node.h"

using namespace std;

class Tree {
  public:
    Tree() {_root=nullptr;}
    void insert(int key, string value);
    void preorder();
    void postorder();
    void inorder();
    int nodeCount() {return nodeCount_helper(_root);}
    bool find(int key) {return find_helper(key, _root);}

  private:
    void insert_helper(int key, string value, Node* parent, Node* &n);
    void preorder_helper(Node* n);
    void postorder_helper(Node* n);
    void inorder_helper(Node* n);
    int nodeCount_helper(Node* n);
    bool find_helper(int key, Node* n);

    Node* _root;

};

#endif
