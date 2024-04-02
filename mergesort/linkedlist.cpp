#include "linkedlist.h"

LinkedList::LinkedList(const LinkedList& ll)
{
  _size=0;
  Node *ptr = ll._head;
  while (ptr != nullptr) /// not null
  {
      push_back(ptr->_data);
      ptr=ptr->_next;
  }

}

LinkedList::~LinkedList() // destructor
{
  while (! isEmpty())
    {
      pop_front();
    }
}
LinkedList LinkedList::operator=(const LinkedList& ll) //  logical copy
{
  _size=0;
  Node *ptr = ll._head;
  while (ptr != nullptr) /// not null
  {
      push_back(ptr->_data);
      ptr=ptr->_next;
  }
  return ll;
}

int LinkedList::numberOfNodes()
{
  return numberOfNodesRecursive(_head);
}


int LinkedList::numberOfNodesRecursive(Node * ptr)
{
  if (ptr == nullptr)
  {
    return 0;
  }
  return 1 + numberOfNodesRecursive(ptr->_next);
}

/*string LinkedList::leastNode()
{
   return leastNodeRecursive(_head); 
}

string LinkedList::leastNodeRecursive(Node * ptr)
{
    if (ptr == nullptr)
    {
      cerr << "No least element in an empty list" << endl;
      exit(0);
    }
    if (ptr->_next == nullptr)
    {
      return ptr->_data;
    }
}*/

void LinkedList::mergeSort()
{
  if (_size == 0) // no elements
    return;
  if (_size == 1) // one element
    return;
  LinkedList ll1;
  LinkedList ll2;
  split(ll1, ll2);
  //cout << "List 1" << ll1 << endl;
  //cout << "List 2" << ll2 << endl;
  ll1.mergeSort();
  ll2.mergeSort();
  merge(ll1, ll2);
}

void LinkedList::split(LinkedList& ll1,LinkedList& ll2)
{
  // split from evenly into ll1 and ll2
  while (!isEmpty())
  {
    ll1.push_back(  pop_front()  );   
    if (!isEmpty())
      ll2.push_back(  pop_front()  );   
  }  
}

void LinkedList::merge(LinkedList& ll1,LinkedList& ll2)
{
    while ( !ll1.isEmpty() && !ll2.isEmpty() )
      {
        if (ll1.front() < ll2.front())
          push_back( ll1.pop_front() );
        else
          push_back( ll2.pop_front() );
      }
  // at this point one of ll1 and ll2 is empty
  while ( !ll1.isEmpty() )
    push_back( ll1.pop_front() );
  while ( !ll2.isEmpty() )
    push_back( ll2.pop_front() );
}

  
void LinkedList::push_back(string item)
{
  Node* newNode = new Node(item, nullptr);
  if ( isEmpty() )
  {
    _head = newNode;
    _tail = newNode;
  } 
  else
  {
    _tail->_next = newNode; 
    _tail = newNode;
  }
  _size++;
 
}

void LinkedList::push_front(string item)
{
  Node* newNode = new Node(item, nullptr);
  if ( isEmpty() )
  {
    _head = _tail = newNode;
  } 
  else
  {
    newNode->_next = _head;
    _head = newNode;
  }
  _size++;
 
}

string LinkedList::pop_front()
{
  if ( isEmpty() )
  {
    cerr << "Attempting to remove an item from an empty list" << endl;
    exit(1);
  }
  // the list is non empty
  _size--;
  Node* deletedNode = _head;
  string returnValue = _head->_data;
  if ( isEmpty() )
  {
    _head = _tail = nullptr;
  }
  else
  {
     _head = _head->_next; 
  }
  delete deletedNode;   // return the memory to the free pool
  return returnValue; 
}

string LinkedList::front()
{
  if ( isEmpty() )
  {
    cerr << "Attempting to view an item from an empty list" << endl;
    exit(1);
  }
  return _head->_data;
}

string LinkedList::back()
{
  if ( isEmpty() )
  {
    cerr << "Attempting to view an item from an empty list" << endl;
    exit(1);
  }
  return _tail->_data;
}


ostream& operator<<(ostream& out, LinkedList &ll)
{
  if (ll.isEmpty()) 
  {
    out << "This is an empty list";
  }
  else
  {
    LinkedList::Node* ptr = ll._head;
    while (ptr != nullptr)
    {
      out << ptr->_data << " | ";
      ptr = ptr->_next;
    }
    
  }
  out << endl;
  return out;
}
