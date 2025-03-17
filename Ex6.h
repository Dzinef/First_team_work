#pragma once


template <typename T>
bool isPrime(T num)
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
void sumPrimes(int32_t* arr[], int32_t size)
{
    int32_t sum{ 0 };

    for (size32_t i = 0; i < size; ++i)
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

    std::cout << "Summ of primes in array: " << sum << "\n";
}
