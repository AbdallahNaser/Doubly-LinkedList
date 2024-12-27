# 🎉 **Doubly Linked List Implementation in C++**

Welcome to the **Doubly Linked List** implementation in **C++**! This repository provides a fully functional doubly linked list that supports basic operations such as insertion, deletion, search, traversal (forward and backward), and clearing the list.

---

## 🌟 **Features**

- **Insert at the End**: Add a new node with the given data to the end of the list.
- **Insert at the Beginning**: Add a new node with the given data to the beginning of the list.
- **Delete a Node**: Remove a node with a specific data value from the list.
- **Search**: Find out if a node with the given data value exists in the list.
- **Display Forward**: View the list from head to tail.
- **Display Backward**: View the list from tail to head.
- **Size**: Get the number of nodes in the list.
- **Clear**: Remove all nodes in the list.

---

## 🔍 **Code Structure**

### **Node**

A `Node` struct represents each element in the doubly linked list. It has:
- `data`: Stores the value of the node.
- `prev`: Points to the previous node in the list.
- `next`: Points to the next node in the list.

### **DoublyLinkedList**

A class that implements the doubly linked list. It provides the following methods:

- **`insertEnd(int data)`**: Inserts a node with the given data at the end of the list.
- **`insertBegin(int data)`**: Inserts a node with the given data at the beginning of the list.
- **`deleteNode(int data)`**: Deletes the first node with the given data.
- **`search(int data)`**: Searches for a node with the given data.
- **`displayForward()`**: Displays the list from the head to the tail.
- **`displayBackward()`**: Displays the list from the tail to the head.
- **`size()`**: Returns the number of nodes in the list.
- **`clear()`**: Deletes all nodes in the list.
- **`~DoublyLinkedList()`**: Destructor that ensures the list is cleared when the object is destroyed.

---

## 📋 **Example Usage**

```cpp
#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList list;

    // Insert nodes
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertBegin(5);

    // Display the list forward
    std::cout << "Forward: ";
    list.displayForward(); // Output: 5 10 20 30

    // Display the list backward
    std::cout << "Backward: ";
    list.displayBackward(); // Output: 30 20 10 5

    // Display the size of the list
    std::cout << "Size: " << list.size() << std::endl; // Output: 4

    // Search for a node with data 20
    std::cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << std::endl; // Output: Found

    // Delete a node with data 20
    list.deleteNode(20);
    std::cout << "After deleting 20: ";
    list.displayForward(); // Output: 5 10 30

    // Clear the list
    list.clear();
    std::cout << "After clearing the list, Size: " << list.size() << std::endl; // Output: 0

    return 0;
}

Ah, I see! You're looking for the correct use of Markdown syntax to increase the size of titles using ###, ##, etc. Here's the properly decorated README file with appropriately styled headings using the Markdown syntax for larger and smaller headings.

markdown
Copy code
# 🎉 **Doubly Linked List Implementation in C++**

Welcome to the **Doubly Linked List** implementation in **C++**! This repository provides a fully functional doubly linked list that supports basic operations such as insertion, deletion, search, traversal (forward and backward), and clearing the list.

---

## 🌟 **Features**

- **Insert at the End**: Add a new node with the given data to the end of the list.
- **Insert at the Beginning**: Add a new node with the given data to the beginning of the list.
- **Delete a Node**: Remove a node with a specific data value from the list.
- **Search**: Find out if a node with the given data value exists in the list.
- **Display Forward**: View the list from head to tail.
- **Display Backward**: View the list from tail to head.
- **Size**: Get the number of nodes in the list.
- **Clear**: Remove all nodes in the list.

---

## 🔍 **Code Structure**

### **Node**

A `Node` struct represents each element in the doubly linked list. It has:
- `data`: Stores the value of the node.
- `prev`: Points to the previous node in the list.
- `next`: Points to the next node in the list.

### **DoublyLinkedList**

A class that implements the doubly linked list. It provides the following methods:

- **`insertEnd(int data)`**: Inserts a node with the given data at the end of the list.
- **`insertBegin(int data)`**: Inserts a node with the given data at the beginning of the list.
- **`deleteNode(int data)`**: Deletes the first node with the given data.
- **`search(int data)`**: Searches for a node with the given data.
- **`displayForward()`**: Displays the list from the head to the tail.
- **`displayBackward()`**: Displays the list from the tail to the head.
- **`size()`**: Returns the number of nodes in the list.
- **`clear()`**: Deletes all nodes in the list.
- **`~DoublyLinkedList()`**: Destructor that ensures the list is cleared when the object is destroyed.

---

## 📋 **Example Usage**

```cpp
#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList list;

    // Insert nodes
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertBegin(5);

    // Display the list forward
    std::cout << "Forward: ";
    list.displayForward(); // Output: 5 10 20 30

    // Display the list backward
    std::cout << "Backward: ";
    list.displayBackward(); // Output: 30 20 10 5

    // Display the size of the list
    std::cout << "Size: " << list.size() << std::endl; // Output: 4

    // Search for a node with data 20
    std::cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << std::endl; // Output: Found

    // Delete a node with data 20
    list.deleteNode(20);
    std::cout << "After deleting 20: ";
    list.displayForward(); // Output: 5 10 30

    // Clear the list
    list.clear();
    std::cout << "After clearing the list, Size: " << list.size() << std::endl; // Output: 0

    return 0;
}
🧑‍💻 Example Output

Forward: 5 10 20 30 
Backward: 30 20 10 5 
Size: 4
Search 20: Found
After deleting 20: 5 10 30 
After clearing the list, Size: 0
