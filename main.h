#ifndef MAIN_H_
#define MAIN_H_
#include <iostream>
using namespace std;

void selectionSort(int* arr, int size);

void selectionSort(double* arr, int size);

template <typename T>
void fillArr(T* arr, int size);

template <typename T>
void printArr(T* arr, int size);

#endif
