#include "sort.h"
#include <iostream>
#include <type_traits>

void selection_sort(std::vector<int> &arr) {
    int tmp;
    for (int i = 0; i < arr.size(); i++) {
        int localMin = i;
        for (int j = i; j < arr.size(); j++) {
            if (arr.at(j) < arr.at(localMin)) {
                std::cout << arr[j] << " is smaller than" << arr[localMin]
                          << '\n';
                localMin = j;
            }
        }
        tmp = arr.at(i);
        arr.at(i) = arr.at(localMin);
        arr.at(localMin) = tmp;
    }
}
void insertion_sort(std::vector<int> &arr) {
    int j, key, tmp;
    for (int i = 1; i < arr.size(); i++) {
        j = i - 1;
        while (j >= 0 && arr[j] > arr[j + 1]) {
            tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
            j--;
        }
    }
}

void bubble_sort(std::vector<int> &arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr.at(j) > arr.at(j + 1)) {
                std::swap(arr.at(j), arr.at(j + 1));
            }
        }
    }
}

int partition_method_hoare(std::vector<int> &arr, int low, int high) {
    int pivot = arr.at(low);
    int i = low, j = high;
    while (i < j) {
        do {
            i++;
        } while (!(arr[i] > pivot));
        do {
            j--;
        } while (!(arr.at(j) <= pivot));
        if (i < j)
            std::swap(arr.at(i), arr.at(j));
    }
    std::swap(arr.at(low), arr.at(j));
    return j;
}

int partition_method_lomuto(std::vector<int> &arr, int low, int high) {
    int pivot = arr.at(low);
    int i = low;
    for (int j = low + 1; j < high; j++) {
        if (arr.at(j) < pivot) {
            i++;
            std::swap(arr.at(i), arr.at(j));
        }
    }
    std::swap(arr.at(low), arr.at(i + 1));
    return ++i;
}

void quick_sort(std::vector<int> &arr, int low, int high) {
    if (high == -1)
        high = arr.size();
    if (low < high) {
        int j = partition_method_hoare(arr, low, high);
        quick_sort(arr, low, j);
        quick_sort(arr, j + 1, high);
    }
}
// [2, 8, 5, 3, 9, 1, 11, 1]
// [2, 8, 5, 3] [9, 1, 11, 1]
// [2, 8] [5, 3] [9, 1] [11, 1]
// [2, 8] [3, 5] [1, 9] [11, 1]
// [2, 3, 8, 5] [1, 9] [11, 1]
void merge(std::vector<int> &arr, int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = 0;
    std::vector<int> copy(high-low+1);
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            copy[k++] = arr[i++];
        } else {
            copy[k++] = arr[j++];
        }
    }

    while(i<=mid){
        copy[k++] = arr[i++];
    }

    while(j<=high){
        copy[k++] = arr[j++];
    }

    for(int c = 0; c < copy.size(); c++){
        arr[low+c] = copy[c];
    }
}

void merge_sort(std::vector<int> &arr, int low, int high){
    if (high == -1)
        high = arr.size()-1;
    if(low < high){
        int mid = (low+high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }        
}


// void bucket_sort(std::vector<int>& arr){}
// void radix_sort(std::vector<int>& arr){}
