template <typename T>
void remove_negatives(T arr[], int size) {
    int pos = 0;

    // Перемещаем все положительные числа в начало массива
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            arr[pos++] = arr[i];
        }
    }

    // Заполняем оставшиеся элементы нулями
    while (pos < size) {
        arr[pos++] = 0;
    }
}
