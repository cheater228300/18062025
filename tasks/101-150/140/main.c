/*
Условие задачи 140:
140. Реализуйте функцию int count_even(int *arr, int size), возвращающую количество чётных чисел в массиве.
*/

int count_even(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

