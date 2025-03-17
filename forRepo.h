#pragma once
#ifndef FORREPO_H
#define FORREPO_H

#include<iostream>
const int32_t MAX_SIZE = 100;


void EnterSize(int32_t&);
void EnterChoice(int32_t&);
bool CheckSize(int32_t);


template <typename T>
void EnterTheArray(T arr, int32_t size)
{
    for (int32_t i{}; i < size; i++)
    {
        std::cin >> arr[i];
    }
}





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
