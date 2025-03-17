template <typename T>
void bubbleSort(T arr[], int size)
{
    // Проходим по всему массиву
    for (int i = 0; i < size - 1; ++i)
    {
        // Проходим по массиву до (size-i-1), так как после каждой итерации 
        // последний элемент становится на свое место
        for (int j = 0; j < size - 1 - i; ++j)
        {
            // Если текущий элемент больше следующего, меняем их местами
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
