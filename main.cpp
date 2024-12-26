#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertEnd(int data)
    {
        Node* newNode = new Node{data, nullptr, nullptr};
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertBegin(int data)
    {
        Node* newNode = new Node{data, nullptr, nullptr};
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void deleteNode(int data)
    {
        Node* temp = head;
        while (temp)
        {
            if (temp->data == data)
            {
                if (temp == head)
                {
                    head = head->next;
                    if (head) head->prev = nullptr;
                }
                else if (temp == tail)
                {
                    tail = tail->prev;
                    if (tail) tail->next = nullptr;
                }
                else
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                delete temp;
                return;
            }
            temp = temp->next;
        }
        cout << "Node with value " << data << " not found." << endl;
    }

    bool search(int data)
    {
        Node* temp = head;
        while (temp)
        {
            if (temp->data == data)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void displayForward()
    {
        Node* temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward()
    {
        Node* temp = tail;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    int size()
    {
        int count = 0;
        Node* temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void clear()
    {
        Node* temp;
        while (head)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

    ~DoublyLinkedList()
    {
        clear();
    }
};

int main()
{
    DoublyLinkedList list;

    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertBegin(5);

    cout << "Forward: ";
    list.displayForward(); // Output: 5 10 20 30

    cout << "Backward: ";
    list.displayBackward(); // Output: 30 20 10 5

    cout << "Size: " << list.size() << endl; // Output: 4

    cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << endl; // Output: Found

    list.deleteNode(20);
    cout << "After deleting 20: ";
    list.displayForward(); // Output: 5 10 30

    list.clear();
    cout << "After clearing the list, Size: " << list.size() << endl; // Output: 0

    return 0;
}
