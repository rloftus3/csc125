#include "linkedlist.h"

LinkedList::LinkedList()
{
    //ctor
    myHead = myTail = NULL;
}

LinkedList::~LinkedList()
{
    Node *ptr=myHead;
    Node *temp;
    while (ptr != NULL)
    {
        temp = ptr->getNext();
        delete ptr;
        ptr = temp;
    }
}

ostream& operator<<(ostream& o, LinkedList &ll)
{
    o << "The list:";
    if ( ll.isEmpty() )
    {
        o << "[EMPTY]" << endl;
    }
    else
    {
        // not empty
        Node *ptr=ll.myHead;
        while (ptr != NULL)
        {
            cout << *ptr;
            ptr = ptr->getNext();
        }
        cout << "Done" << endl;
    }
    return o;
}

void LinkedList::insertAtFront(string s)
{
    if ( isEmpty() )
    {
        Node* temp = new Node(s, NULL);
        myHead = myTail = temp;
    }
    else
    {
        Node *temp = new Node(s, myHead);
        myHead = temp;
    }
}
void LinkedList::insertAtBack(string s)
{
    if ( isEmpty() )
    {
        Node* temp = new Node(s, NULL);
        myHead = myTail = temp;
    }
    else
    {
        Node *temp = new Node(s, NULL);
        myTail->setNext(temp);
        myTail = temp;
    }
}

string LinkedList::removeFromFront()
{
    Node *deleteMe = myHead;
    string returnMe = myHead->getData();

    myHead=myHead->getNext();
    if (myHead == NULL)
    {
        myTail = NULL;
    }

    delete deleteMe;
    return returnMe;
}

void LinkedList::mergeSort()
{
/// if the list has one or zero elements, return
    if (myHead == myTail) return;
    LinkedList l1, l2;

    // split the current list into two
    split(l1, l2);

    // mergesort each half
    l1.mergeSort();
    l2.mergeSort();

    // merge the sorted halves back into the current list
    join(l1, l2);
}

void LinkedList::split(LinkedList &l1, LinkedList &l2)
{
    while (!isEmpty())
    {
        l1.insertAtBack(removeFromFront());
        if (!isEmpty())
        {
            l2.insertAtBack(removeFromFront());
        }
    }
}

void LinkedList::join(LinkedList &l1, LinkedList &l2)
{
    while (!l1.isEmpty() && !l2.isEmpty())
    {
        if (l1.myHead->getData() < l2.myHead->getData() )
        {
            insertAtBack(l1.removeFromFront());
        }
        else
        {
            insertAtBack(l2.removeFromFront());
        }
    }
    while (!l1.isEmpty())
    {
        insertAtBack(l1.removeFromFront());
    }
    while (!l2.isEmpty())
    {
        insertAtBack(l2.removeFromFront());
    }
}
