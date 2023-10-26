
#include "Node.h"
#include "LinkedList.h"

int main()
{
	LinkedList<int> testIntList;

    std::cout << "[1] Adding Values.\n----> Expecting: 4 1 2 3 5" << std::endl;
	testIntList.Insert(1, InsertLocation::Back);
	testIntList.Insert(2, InsertLocation::Front);
	testIntList.Insert(3, InsertLocation::Back);
	testIntList.Insert(4, InsertLocation::Front);
	testIntList.Insert(5, InsertLocation::Back);
    std::cout << "----> Result:    "; testIntList.Display(); 

    std::cout << "[2] Erasing value = 1\n";
    std::cout << "----> Expecting: 4 2 3 5" << std::endl;
	testIntList.EraseValue(1);
    std::cout << "----> Result:    "; testIntList.Display(); 

    std::cout << "[3] Erasing value = 4\n";
    std::cout << "----> Expecting: 2 3 5" << std::endl;
    testIntList.EraseValue(4);
    std::cout << "----> Result:    "; testIntList.Display();

    std::cout << "[4] Erasing value = 5\n";
    std::cout << "----> Expecting: 2 3" << std::endl;
    testIntList.EraseValue(5);
    std::cout << "----> Result:    "; testIntList.Display();

    std::cout << "[5] Appending value = 1 to head.\n";
    std::cout << "----> Expecting: 1 2 3" << std::endl;
    testIntList.Insert(1, InsertLocation::Front);
    std::cout << "----> Result:    "; testIntList.Display();

    std::cout << "[6] Appending value = 4 to tail.\n";
    std::cout << "----> Expecting: 1 2 3 4" << std::endl;
    testIntList.Insert(4, InsertLocation::Back);
    std::cout << "----> Result:    "; testIntList.Display();

    std::cout << "[7] Creating linked list of character values\n";
    std::cout << "----> Expecting: a b c d" << std::endl;
    LinkedList<char> testCharList;
    testCharList.Insert('a', InsertLocation::Back);
    testCharList.Insert('b', InsertLocation::Back);
    testCharList.Insert('c', InsertLocation::Back);
    testCharList.Insert('d', InsertLocation::Back);
    std::cout << "----> Result:    "; testCharList.Display();
}