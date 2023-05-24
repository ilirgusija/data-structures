// #include "linked_lists/linked_list.h"
#include "heap/heap.h"
#include <iostream>

int fib(int n ){
    int prev = 0;
    int curr = 1;
    int res = 0;
    if(n==1) return 1;
    for(int i = 1; i < n ; i++){
        res = curr + prev;
        prev = curr;
        curr = res;
    }
    return res;
}

template<typename T>
std::vector<T> heap_sort(std::vector<T> arr){
    Heap<T>* heap = new Heap<int>(arr);
    T temp;
    int max = heap->heap.size() - 1;
    for(int i = 0; i< heap->heap.size(); i++){
        temp = heap->heap.at(max);
        heap->heap.at(max) = heap->heap.at(0);
        heap->heap.at(0) = temp;
        max--;
        heap->heapify(max, 0);
    }
    return heap->heap;
}

int main(int, char **) {
  // LinkedList *list = new LinkedList(new LinkedList::Node(
  //     1, new LinkedList::Node(2, new LinkedList::Node(3))));

  // LinkedList::Node* temp = list->head;
  // temp = temp->next;
  // list->InsertAfter(temp, 4);
  // LinkedList::Node* node = list->head;
  // do{
  //   std::cout << node->val << '\n';
  // }while ((node = node->next));
  // std::cout << fib(1) << fib(2) << fib(3)<<fib(4)<<fib(5);
  std::vector<int> arr = {2,8,5,3,9,1};
  arr = heap_sort(arr);
  for(int i = 0; i < arr.size(); i++){
    std::cout << arr.at(i) << '\n';
  }


  return 0;
}
