#include "main.h"

int main()
{
    int dsize = 0;
    cout << "Type double array size: ";
    if (!(cin >> dsize))
    {
        cout << "Invalid input!";
        return 1;
    }
    double* darr = new double[dsize];
    cout << "Filling double array: ";
    fillArr(darr, dsize);

    int isize = 0;
    cout << "Type int array size: ";
    if (!(cin>>isize))
    {
        cout << "Invalid input!";
        return 1;
    }
    int* iarr = new int[isize];
    cout << "Filling int array: ";
    fillArr(iarr, isize);

    cout << "Unsorted int array: " << endl;
    printArr(iarr, isize);
    selectionSort(iarr, isize);
    cout << "Sorted int array: " << endl;
    printArr(iarr, isize);

    cout << "Unsorted double array: " << endl;
    printArr(darr, dsize);
    selectionSort(darr, dsize);
    cout << "Sorted double array: " << endl;
    printArr(darr, dsize);
}
void selectionSort(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = 0;
        int mini = 100000;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < mini)
            {
                mini = arr[j];
                key = j;
            }
        }
        if (key!=i)
        {
            swap(arr[i], arr[key]);
        }
    }
}

void selectionSort(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = i;
        double mini = arr[i];
        for (int j = i; j < size; j++)
        {
            if (arr[j] < mini)
            {
                mini = arr[j];
                key = j;
            }
        }
        if (key != i)
        {
            swap(arr[i], arr[key]);
        }
    }
}

template <typename T>
void fillArr(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(cin>>arr[i]))
        {
            i--;
            continue;
        }
    }
}

template <typename T>
void printArr(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
