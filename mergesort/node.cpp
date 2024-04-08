#include "node.h"


ostream& operator<<(ostream& o, Node &n)
{
    o << "The node at " << &n << " contains ["
      << n.getData() << "].  Next node is at "
      << static_cast<void *>(n.getNext())  << endl;

    return o;
}
