#ifndef _NODE_H
#define _NODE_H

template <typename T>
class Node
{
public:
    T data;
	Node* nextNode;
	Node(T value);
};

#include "Node.tpp"

#endif // _NODE_H