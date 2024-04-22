#ifndef _NODE_H_
#define _NODE_H_
#include <cstddef>

#include<iostream>

using namespace std;

class Node {
   public:
      Node(int k, string v, Node* p=nullptr, Node* l=nullptr, Node* r=nullptr) {
          _key=k; _value=v; _parent=p; _left=l; _right=r;}
      Node* _parent;
      Node* _left;
      Node* _right;
      int _key;
      string _value;
};

#endif
