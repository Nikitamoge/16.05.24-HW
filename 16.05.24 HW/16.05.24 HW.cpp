#include <iostream>

using namespace std;

bool ascending(int a, int b)
{
    return a > b;     // возвращает «истину»,
    // если первый элемент
    // оказывается больше второго
}

bool descending(int a, int b) // функция для сортировки 
{                        // по убыванию
    return a < b;
}

void BubbleSort(int arr[], int n, bool (*comparisonFcn)(int, int))
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (comparisonFcn(arr[j], arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void printArray(int* array, int size)
{
    for (int index = 0; index < size; ++index)
        cout << array[index] << " ";
    cout << '\n';
}


int main()
{
    int array[8] = { 4, 8, 5, 6, 2, 3, 1, 7 };
    BubbleSort(array, 8, descending); // сортируем массив 
    printArray(array, 8);   // выводим массив на экран
}
