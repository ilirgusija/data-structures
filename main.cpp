// #include "linked_lists/linked_list.h"
#include "sorts/sort.h"
#include <iostream>


// int fib(int n ){
//     int prev = 0;
//     int curr = 1;
//     int res = 0;
//     if(n==1) return 1;
//     for(int i = 1; i < n ; i++){
//         res = curr + prev;
//         prev = curr;
//         curr = res;
//     }
//     return res;
// }

// void print_hash_tree(int n) {
//     std::string temp = "  ";
//     std::cout << "Printing tree\n";
//     for (int i = 0; i < n; i++) {
//         temp += "  ";
//     }
//     for (int i = 1; i <= n; i++) {
//         int right = n+i+1;
//         int left = n-i;
//         temp.at(left) = temp.at(right) = '#';
//         std::cout << temp << '\n';
//     }
//     std::cout << "\n\n\n";
// }



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
    std::vector<int> arr = {2, 8, 5, 3, 9, 1, 11, 1};
    // insertion_sort(arr);
    merge_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr.at(i) << '\n';
    }
    

    return 0;
}
