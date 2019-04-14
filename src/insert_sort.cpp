#include "utils.h"
#include "insert_sort.h"

namespace nSORT
{
    /*************************************/
//    function insertionSort(arr) {
//        var len = arr.length;
//        var preIndex, current;
//        for (var i = 1; i < len; i++) {
//            preIndex = i - 1;
//            current = arr[i];
//            while (preIndex >= 0 && arr[preIndex] > current) {
//                arr[preIndex + 1] = arr[preIndex];
//                preIndex--;
//            }
//            arr[preIndex + 1] = current;
//        }
//        return arr;
//    }


    /*************************************/
    bool cINSERT::bSort(int *a, int length)
    {
        int preIndex, current;
        for(int i=1; i<length; i++)
        {
            preIndex = i-1;
            current = a[i];
            while(preIndex >= 0 && a[preIndex]>current)
            {
                a[preIndex + 1] = a[preIndex];
                preIndex--;
            }
            a[preIndex+1] = current;
        }

    }
}