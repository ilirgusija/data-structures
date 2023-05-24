#include "heap.h"

template<typename T>
void Heap<T>::insert(T thing){
    this->heap.at(this->lastPlace + 1) = thing;
    heapify();
}

template<typename T>
std::vector<T> heap_sort(std::vector<T> arr){
        Heap<T>* heap = new Heap(arr);
        T temp;
        int max = heap->heap->size() - 1;
        for(int i = 0; i< heap->heap->size(); i++){
            temp = heap->heap->at(max);
            heap->heap->at(max) = heap->at(0);
            heap->heap->at(0) = temp;
            max--;
            heap->heapify(max, 0);
        }
        return heap->heap;
    }