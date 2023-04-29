#include "Header.h"

void BubbleSort(float* arr, int num) {
    for (int i = 0; i < num; i++)
        for (int j = 0; j < num - 1; j++)
            if (arr[j] > arr[i])
                swap(arr[j], arr[i]);
}
void InsertSort(float* arr, int num) {
    int min;
    for (int i = 1; i < num; i++)
        for (int j = i; j >= 1 && arr[j] < arr[j - 1]; j--)
            swap(arr[j], arr[j - 1]);
}
void MinSort(float* arr, int num) {
    for (int i = 0; i < num; i++)
        for (int k = i, j = i + 1; j < num; j++) {
            if (arr[j] < arr[k]) {
                k = j;
                swap(arr[k], arr[i]);
            }
        }
}
void ShellSort(float* arr, int num) {
    int sorted;
    for (int gap = num / 2; gap > 0; gap /= 2)
        do {
            sorted = 0;
            for (int i = 0, j = gap > 0; j < num; i++, j++) {
                if (*(arr + i) > *(arr + j)) {
                    swap(*(arr + i), *(arr + j));
                    sorted = 1;
                }
            }
        } while (sorted);
}
void QuickSort(float* arr, int num5, int left, int right) {
    int i = left, j = right;
    int test = arr[(left + right) / 2];
    do {
        while (arr[i] < test)
            i++;
        while (arr[j] > test)
            j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++; j--;
        }
    } while (i <= j);
    if (i < right)
        QuickSort(arr, num5, i, right);
    if (j > left)
        QuickSort(arr, num5, left, j);
}