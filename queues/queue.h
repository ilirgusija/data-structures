#include <iostream>
#include "../linked_lists/linked_list.h"
#define MAX_SIZE 10

class QueueArray {
public:
    QueueArray(int front = -1, int end = -1, int count = 0) : front(front), end(end), count(count) {
        this->q = new int[MAX_SIZE];
    };
    bool isempty();
    bool isfull();
    void push(int val);
    void remove();
    int front;
    int end;
    int count;
    int* q;
};

class QueueLinkedList {
public:
    QueueLinkedList(int front = nullptr, int end = nullptr, int count = 0) : front(front), end(end), count(count) {
        this->front = new Node();
    };
    bool isempty();
    void push(int val);
    Node* remove();
    Node* front;
    Node* end;
    int count;
    Node* q;
};
