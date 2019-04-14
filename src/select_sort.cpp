#include "select_sort.h"
#include "utils.h"

namespace nSORT
{

    /***************************************************/

//    function selectionSort(arr) {
//        var len = arr.length;
//        var minIndex, temp;
//        for (var i = 0; i < len - 1; i++) {
//            minIndex = i;
//            for (var j = i + 1; j < len; j++) {
//                if (arr[j] < arr[minIndex]) {     // 寻找最小的数
//                    minIndex = j;                 // 将最小数的索引保存
//                }
//            }
//            temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//        return arr;
//    }

    /***************************************************/


    bool cSELECT::bSort(int *a, int length)
    {
        int minIndex, temp;
        for(int i=0; i<length-1;i++)
        {
            minIndex = i;
            for(int j=i+1; j<length; j++)
            {
                if(a[j] < a[minIndex])
                {
                    minIndex = j;
                }
            }
            bReplaceFactory(&a[i], &a[minIndex]);
        }
        return true;
    }

}