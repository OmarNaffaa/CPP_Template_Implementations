#include "LinkedList.h"
#include "Node.h"

#include <iostream>

namespace stlCopy {

template <typename T>
LinkedList<T>::LinkedList()
{
	headNode = nullptr;
	tailNode = nullptr;
	listSize = 0;
}

template <typename T>
inline bool LinkedList<T>::Empty()
{
	return (listSize == 0);
}

template <typename T>
void LinkedList<T>::Insert(T value, InsertLocation insertLocation)
{
	Node<T> *entry = new Node<T>(value);

	if (Empty()) { // Entry is first element
		headNode = entry;
		tailNode = entry;
	}
	else if (insertLocation == InsertLocation::Front) {
		entry->nextNode = headNode;
		headNode = entry;
	}
	else {
		tailNode->nextNode = entry;
		tailNode = tailNode->nextNode;
	}

	listSize++;
}

template <typename T>
void LinkedList<T>::EraseValue(T value)
{
	bool eraseSuccessful = false;
	Node<T> *prev, *curr;

	if (Empty()) {
		std::cout << "[ERROR] List is empty. Nothing to erase" << std::endl;
		return;
	}

	prev = headNode;
	curr = headNode->nextNode;

	if (headNode->data == value) {
		// Special case: Erase head node
		headNode = curr;

		--listSize;
		delete prev;
	}
	else {
		for (int i = 0; i < listSize; ++i) {
			if (curr->data == value && curr == tailNode) {
				prev->nextNode = curr->nextNode;
				tailNode = prev; // Move tail to point to new "last node"
				eraseSuccessful = true;
			}
			else if (curr->data == value) {
				prev->nextNode = curr->nextNode;
				eraseSuccessful = true;
			}

			if (eraseSuccessful) {
				--listSize;
				delete curr;
				break;
			}

			prev = curr;
			curr = curr->nextNode;
		}
	}
}

template <typename T>
void LinkedList<T>::Display()
{
	// create an iterator node that starts at the
	// first node by pointing at the same place
	// as the head node
	Node<T> *iterator = headNode;

	for (int i = 0; i < listSize; i++) {
		std::cout << iterator->data << " ";
		iterator = iterator->nextNode;
	}
	std::cout << std::endl;
}

} // namespace stlCopy