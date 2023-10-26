#include "Node.h"

namespace stlCopy {

template <typename T>
Node<T>::Node(T value)
{
	data = value;
	nextNode = nullptr;
}

} // namespace stlCopy
