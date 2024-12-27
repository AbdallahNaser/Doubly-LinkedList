📚 Doubly Linked List Implementation in C++
This repository contains an implementation of a Doubly Linked List in C++ that supports basic operations such as insertion, deletion, search, traversal (forward and backward), and clearing the list.

🌟 Features
Insert at the End: Adds a new node with the given data to the end of the list.
Insert at the Beginning: Adds a new node with the given data to the beginning of the list.
Delete a Node: Deletes a node with a specific data value from the list.
Search: Checks if a node with a given data value exists in the list.
Display Forward: Displays the list from head to tail.
Display Backward: Displays the list from tail to head.
Size: Returns the number of nodes in the list.
Clear: Clears all nodes in the list.
💡 Code Structure
Node: A struct that represents a node in the doubly linked list. Each node contains:

data: The data of the node.
prev: A pointer to the previous node.
next: A pointer to the next node.
DoublyLinkedList: A class that implements the doubly linked list. It contains:

head: A pointer to the first node in the list.
tail: A pointer to the last node in the list.
insertEnd(int data): Inserts a node with the given data at the end of the list.
insertBegin(int data): Inserts a node with the given data at the beginning of the list.
deleteNode(int data): Deletes the first node with the given data.
search(int data): Searches for a node with the given data.
displayForward(): Displays the list from the head to the tail.
displayBackward(): Displays the list from the tail to the head.
size(): Returns the number of nodes in the list.
clear(): Deletes all nodes in the list.
~DoublyLinkedList(): Destructor that ensures the list is cleared when the object is destroyed.
🚀 Example Usage
cpp
Copy code
#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList list;

    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertBegin(5);

    // Display the list forward
    cout << "Forward: ";
    list.displayForward(); // Output: 5 10 20 30

    // Display the list backward
    cout << "Backward: ";
    list.displayBackward(); // Output: 30 20 10 5

    // Display the size of the list
    cout << "Size: " << list.size() << endl; // Output: 4

    // Search for a node with data 20
    cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << endl; // Output: Found

    // Delete a node with data 20
    list.deleteNode(20);
    cout << "After deleting 20: ";
    list.displayForward(); // Output: 5 10 30

    // Clear the list
    list.clear();
    cout << "After clearing the list, Size: " << list.size() << endl; // Output: 0

    return 0;
}
🔥 Output:
yaml
Copy code
Forward: 5 10 20 30 
Backward: 30 20 10 5 
Size: 4
Search 20: Found
After deleting 20: 5 10 30 
After clearing the list, Size: 0
🛠️ How to Compile and Run
Save the code to a file, for example, DoublyLinkedList.cpp.
Open a terminal and navigate to the directory where the file is saved.
Compile the code using the following command:
Copy code
g++ DoublyLinkedList.cpp -o DoublyLinkedList
Run the executable:
Copy code
./DoublyLinkedList
📄 License
This project is licensed under the MIT License.
