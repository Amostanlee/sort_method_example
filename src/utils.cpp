#include "utils.h"
#include <iostream>


namespace nSORT
{
    using namespace std;
    bool bReplaceFactory(int *a, int *b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
        return true;
    }

    bool bShowData(int *arr, int len)
    {
        cout<<"array: ";
        for(int i=0;i<len;i++)
        {
            if(i<len-1)
            {
                cout<<arr[i]<<", ";
            }
            else
            {
                cout<<arr[i]<<endl;
            }

        }
    }
}


//bool bReplaceFactory(int *a, int *b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//    return true;
//}