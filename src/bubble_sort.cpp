#include "bubble_sort.h"
#include "utils.h"

namespace nSORT
{
    bool cBUBBLE::BubbleSort(int *a, int length)
    {
        for(int i=0;i<length-1;i++)
        {
            for(int j=0;j<length-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    bReplaceFactory(&a[j], &a[j+1]);
                }

            }
        }

        return true;
    }

}