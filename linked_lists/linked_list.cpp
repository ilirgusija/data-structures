#include "linked_list.h"

LinkedList::Node::Node(int val, Node* next){
    this->val = val;
    this->next = next;
}

LinkedList::LinkedList(Node* node){
    this->head = node;
}

void LinkedList::InsertFront(int val){
    Node* node = new Node(val, this->head);
    this->head = node;
}

void LinkedList::InsertEnd(int val){
    Node* node = new Node(val);
    Node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = node;
}

void LinkedList::InsertAfter(Node* after, int val){
    if(after == nullptr){
        std::cout << "Cannot insert after the given node as it is NULL\n";
        return;
    }
    Node* temp = after->next;
    after->next = new Node(val, temp);
}



