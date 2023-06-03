#include <vector>
#include "../heap/heap.h"


void selection_sort(std::vector<int>& arr);
void insertion_sort(std::vector<int>& arr);
void binary_sort(std::vector<int>& arr);
void bubble_sort(std::vector<int>& arr);
void quick_sort(std::vector<int>& arr, int low = 0, int high = -1);
void shell_sort(std::vector<int>& arr);
void merge_sort(std::vector<int> &arr, int low = 0, int high = -1);
void bucket_sort(std::vector<int>& arr);
void radix_sort(std::vector<int>& arr);

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
