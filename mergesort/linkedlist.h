#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include "node.h"

using namespace std;

class LinkedList
{
    friend ostream& operator<<(ostream& o, LinkedList &ll);
    public:
        LinkedList();
        ~LinkedList();
        void insertAtFront(string s);
        void insertAtBack(string s);

        string removeFromFront();


        bool isEmpty() {return myHead == NULL;}

        void mergeSort();

    protected:
    private:
        /// for use with mergeSort
        void split(LinkedList &l1, LinkedList &l2);
        void join(LinkedList &l1, LinkedList &l2);

        Node *myHead;  // first element
        Node *myTail;  // last element
};

#endif // LINKEDLIST_H
