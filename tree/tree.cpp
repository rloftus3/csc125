#include "tree.h"

using namespace std;

void Tree::insert(int key, string value)
{
  insert_helper(key, value, nullptr, _root);
}

void Tree::preorder()
{
  preorder_helper(_root);
}
void Tree::postorder()
{
  postorder_helper(_root);
}
void Tree::inorder()
{
  inorder_helper(_root);
}

void Tree::insert_helper(int key, string value, Node* parent, Node* &n)
{
    //cout << "Inserting " << key << endl;
    if (n == nullptr)
    {
      n = new Node(key, value, parent, nullptr, nullptr);
      return;
    }
    else if (n->_key > key)
      insert_helper(key, value, n, n->_left);
    else 
      insert_helper(key, value, n, n->_right); 
    return;
}

void Tree::preorder_helper(Node* n)
{
  // end the recursion
  if (n == nullptr) return;

  // visit the non empty node
  cout << n->_key << " " << n->_value << " ";
  
  // visit the left child's subtree
  preorder_helper(n->_left);
  
  // visit the right child's subtree
  preorder_helper(n->_right);

  //done
  return;

}

void Tree::postorder_helper(Node* n)
{
  // end the recursion
  if (n == nullptr) return;
  // visit the left child's subtree
  postorder_helper(n->_left);
  // visit the right child's subtree
  postorder_helper(n->_right);
  // visit the non empty node
  cout << n->_key << " " << n->_value << " ";
  //done
  return;
}

void Tree::inorder_helper(Node* n)
{
  // end the recursion
  if (n == nullptr) return;
  // visit the left child's subtree
  inorder_helper(n->_left);
  // visit the non empty node
  cout << n->_key << " " << n->_value << " ";
  // visit the right child's subtree
  inorder_helper(n->_right);
  //done
  return;
}

int Tree::nodeCount_helper(Node* n)
{
  // end the recursion
  if (n == nullptr) return 0;
  // visit the left child's subtree
  int left = nodeCount_helper(n->_left);
 // visit the right child's subtree
  int right = nodeCount_helper(n->_right);
  //done
  return left+right+1;
}

bool Tree::find_helper(int key, Node* n)
{
  // end the recursion
  if (n == nullptr) return false;
  if (n->_key == key) return true;
  // visit the left child's subtree
  else if (n->_key > key)
    return find_helper(key, n->_left);
  else  
    return find_helper(key, n->_right);
}