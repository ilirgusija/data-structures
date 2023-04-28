#include <iostream>

class LinkedList {
public:
    class Node{
    public:    
        Node(int val = 0, Node* next = nullptr);
        int val;
        Node* next;
    };
    Node* head;
    LinkedList(Node* node = new Node());
    void InsertFront(int val);
    void InsertEnd(int val);
    void InsertAfter(Node* node, int val);
    void Deletion(int val);
    LinkedList::Node* LookUp(int val);

};