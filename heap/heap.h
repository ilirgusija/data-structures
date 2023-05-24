#include <vector>
#include <queue>

template <typename T>
class Heap {
public:
    std::vector<T> heap;
    int size;
    Heap(std::vector<T> heap = new std::vector<T>()) {
        this->heap = heap;
        this->size = heap.size();
        this->create_max_heap();
    };
    void insert(T thing);
    void create_max_heap(){
        int h = heap.size()/2;
        while(h >= 0){
            heapify(heap.size(), h);
            h--;
        }
    };
    void heapify(int size, int i = 0) {
        /*
        1. Find highest index of non-leaf node
        2. Store value in temp
        3. Move largest child into slot
        4. call insert_heap(temp)
        5. Repeat by moving back by on non-leaf node at a time.
        */
        int left = i * 2 + 1;
        int right = i * 2 + 2;
        int temp, largest = i;
        temp = heap.at(i);
        if(left < size && heap.at(left) > heap.at(i)){
            largest = left;
        }
        if(right < size && heap.at(right) > heap.at(largest)){
            largest = right;
        }
        if(largest!=i){
            heap.at(i) = heap.at(largest);
            heap.at(largest) = temp;
            heapify(size, largest);
        }
    };
    

};