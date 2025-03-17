template <typename T>
void ReversArray(T arr[], int32_t size) 
{
    for (int32_t i = 0; i < size / 2; ++i)
    {
        T temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
