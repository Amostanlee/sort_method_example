#include <iostream>
#include "utils.h"
#include "bubble_sort.h"
#include "select_sort.h"
#include "insert_sort.h"
#include "shell_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"

using namespace std;
using namespace nSORT;


int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[10] = {1, 3, 4, 6, 2, 5, 3, 2, 9, 2};
    int len = 10;
    cBUBBLE bubble_sort;
    cSELECT select_sort;
    cINSERT insert_sort;

//    bubble_sort.BubbleSort(arr, len);
//    select_sort.bSort(arr, len);
    insert_sort.bSort(arr, len);

    bShowData(arr, len);

    return 0;
}



