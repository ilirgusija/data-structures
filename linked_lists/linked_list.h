#include <iostream>

class Node{
    public:    
        Node(int val = 0, Node* next = nullptr);
        int val;
        Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList(Node* node = new Node());
    void InsertFront(int val);
    void InsertEnd(int val);
    void InsertAfter(Node* node, int val);
    void Deletion(int val);
    Node* LookUp(int val);
}; 
