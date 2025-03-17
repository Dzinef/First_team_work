#include "header_ex5.h"

double CalculateAverage(const int32_t arr[], int32_t size, int32_t sum, int32_t count)
{
    double average{};
    if (size < 3)
    {
        std::cerr << "Ошибка: массив должен содержать как минимум 3 элемента!\n";
        return 0.0;
    }

    int32_t maxIndex = 0, minIndex = 0;
    for (int32_t i = 1; i < size; ++i)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    if (maxIndex > minIndex)
    {
        std::swap(maxIndex, minIndex);
    }

    int32_t sum = 0, count = 0;
    for (int32_t i = maxIndex + 1; i < minIndex; ++i)
    {
        sum += arr[i];
        count++;
    }

    if (count == 0) {
        std::cerr << "Ошибка: между максимальным и минимальным элементами нет других чисел!\n";
        return 0.0;
    }
    average = static_cast<double>(sum) / count;
    return average;
}
