#include "queue.h"

bool QueueArray::isempty(){
    return count==0;
};
bool QueueLinkedList::isempty(){
    return count==0;
};

bool QueueArray::isfull(){
    return count==MAX_SIZE;
};

void QueueLinkedList::push(int val){
    Node* newN = new Node(val);
    if(this->front == nullptr) this->front = newN; 
    if(end!=nullptr) this->end->next = newN;
    this->end = newN;
    count++;
}

void QueueArray::push(int val){
    if(this->isfull()){
        std::cout << "Queue is full, unable to add more elements\n";
        return;
    } else {
        if(this->isempty()) front = ++end;
        else end = (this -> end = MAX_SIZE - 1) ? 0 : end+1;
        count++;
        q[end] = val;
    } 
};

void QueueArray::remove(){
    if(this->isempty()){
        std::cout << "Queue is empty, unable to remove more elements\n";
        return;
    }
    else {
        q[front] = 0;
        count--;
        if(this->isempty()) front = end = -1;
        else front = (this->front == 0) ? MAX_SIZE : front-1;
    }
};
Node* QueueLinkedList::remove(){
    if(this->isempty()){
        std::cout << "Queue is empty, unable to remove more elements\n";
        return;
    }
    Node* freed = this->front;
    this->front = this->front->next;
    if(front == nullptr) end = nullptr;
    count--;
    return freed;
};