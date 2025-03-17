#include "maxmin4.h"



int32_t MaxElement(const int32_t arr[], int32_t size, int32_t maxIndex)
{
    for (int32_t i = 1; i < size; ++i)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}


int32_t MinElement(const int32_t arr[], int32_t size, int32_t minIndex)
{
    for (int32_t i = 1; i < size; ++i)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

