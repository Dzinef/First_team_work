#pragma two
#ifndef EX6_H
#define EX6_H

#include<iostream>

bool isPrime(int32_t num);
int32_t sumPrimes(int32_t, int32_t);


template <typename T>
bool isPrime(int32_t num)
{
    if (num <= 1) return false;

    for (int16_t i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
    

template <typename T>
int32_t sumPrimes(int32_t arr[], int32_t size)
{
    int32_t sum{ 0 };
    int32_t num{ 0 };

    for (int32_t i{0}; i < size; ++i)
    {
        num = arr[i];

        if (num == 2 || num == 3)
        {
            sum += num;
        }

        if (isPrime(num))
        {
            sum += num;
        }

    }

    return sum;
}

#endif
