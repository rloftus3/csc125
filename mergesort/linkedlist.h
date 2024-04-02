#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <string>
#include <iostream>

using namespace std;

class LinkedList
{
  public:
    friend ostream& operator<<(ostream& out, LinkedList &ll);
    LinkedList() {_head=nullptr; _tail=nullptr; _size=0;}
    LinkedList(const LinkedList& ll);   /// copy constructor
    ~LinkedList(); // destructor
    LinkedList operator=(const LinkedList& ll); //  logical copy
    bool isEmpty() {return _size==0;}
    void push_back(string item);
    void push_front(string item);
    string pop_front();
    string front();
    string back();
    int size() {return _size;}
    int len() {return _size;}

    int numberOfNodes();  
    string leastNode();  
    void mergeSort();

  private:
    class Node
    {
      public:
        Node(string str, Node* ptr) {_data=str; _next=ptr;}
        string _data;
        Node* _next;
    };

    int numberOfNodesRecursive(Node *);
    string leastNodeRecursive(Node *);
    
    void split(LinkedList& ll1,LinkedList& ll2);
    void merge(LinkedList& ll1,LinkedList& ll2);
    Node* _head;
    Node* _tail;
    int _size; 

};

#endif
