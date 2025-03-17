#pragma once
#ifndef Ex1_H
#define Ex1_H

#include<iostream>

bool CheckSize(int32_t);
template <typename T>
void PrintArray(const T* arr, int32_t size)
{
    for (int32_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

#endif
