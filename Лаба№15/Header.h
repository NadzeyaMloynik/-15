#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
#include <ctime>

using namespace std;


void BubbleSort(float* arr, int num);
void InsertSort(float* arr, int num);
void MinSort(float* arr, int num);
void ShellSort(float* arr, int num);
void QuickSort(float* arr, int num5, int left, int right);
void inArray(float* arr, int size);
void RandArray(float* arr, int num);
void OutArray(float* arr1, float* arr2, float* arr3, float* arr4, float* arr5, int size1, int size2, int size3, int size4, int size5);
void LineSearch(float* arr1, int size1, float* arr2, int size2, float* arr3, int size3, float* arr4, int size4, float* arr5, int size5, float number);
//void BISearch(float* arr1, int size1, float* arr2, int size2, float* arr3, int size3, float* arr4, int size4, float* arr5, int size5, float number);
void Search_Binary(float* arr1, int size1, float* arr2, int size2, float* arr3, int size3, float* arr4, int size4, float* arr5, int size5, float number);