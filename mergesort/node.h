#ifndef NODE_H
#define NODE_H

#include<string>    /// for string
#include<iostream>  /// for ostream

using namespace std;

class Node
{
    // stream insertion for debugging
    friend ostream& operator<<(ostream& o, Node &n);
    public:

        // constructors
        Node() {myNext=NULL;}
        Node(string s) {myData=s; myNext=NULL;}
        Node(string s, Node* n){myData=s; myNext=n;}

        // Mutators
        void setData(string s) {myData = s;}
        void setNext(Node* n) {myNext = n;}

        // Accessors
        string getData() {return myData;}
        Node* getNext() {return myNext;}

    protected:
    private:
        string myData;
        Node* myNext;
};

#endif // NODE_H
