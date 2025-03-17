#pragma once
#ifndef FORREPO_H
#define FORREPO_H

#include<iostream>
const int32_t MAX_SIZE = 100;


void EnterSize(int32_t&);
void EnterChoice(int32_t&);


template <typename T>
void EnterTheArray(T arr, int32_t size)
{
    for (int32_t i{}; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

template <typename T>
int32_t CountElements(T arr[], int32_t size)
{
    int32_t firstZeroIndex = -1;
    int32_t lastZeroIndex = -1;

    for (int32_t i = 0; i < size; ++i)
    {
        if (arr[i] == 0 || arr[i] == '0')
        {
            if (firstZeroIndex == -1)
            {
                firstZeroIndex = i;
            }
            lastZeroIndex = i;
        }
    }

    if (firstZeroIndex == -1 || lastZeroIndex == -1 || firstZeroIndex == lastZeroIndex)
    {
        return -1;
    }

    return lastZeroIndex - firstZeroIndex - 1;
}
#endif

