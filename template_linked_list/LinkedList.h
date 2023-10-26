#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <iostream>

#include "Node.h"

namespace stlCopy {

enum class InsertLocation {
    Front,
    Back
};

template <typename T>
class LinkedList
{
private:
    stlCopy::Node<T>* headNode;
    stlCopy::Node<T>* tailNode;
    int listSize;

public:
    /**
     * @brief Construct a new Linked List object
     * 
     */
    LinkedList();

    /**
     * @brief Determines whether linked list is empty
     * 
     * @return True if empty, false otherwise
     */
    bool Empty();

    /**
     * @brief Insert an element at either the front or back
     *        the linked list
     * 
     * @param value 
     * @param location 
     */
    void Insert(T value, InsertLocation location);

    /**
     * @brief Remove a node containing the first occurence of specified element from the list
     * 
     * @param value 
     */
    void EraseValue(T value);

    /**
     * @brief Display linked list contents
     * 
     */
    void Display();

    /**
     * @brief Clean up Linked List object
     * 
     */
    ~LinkedList();
};

} // namespace stlCopy

#include "LinkedList.tpp"

#endif // _LINKED_LIST_H