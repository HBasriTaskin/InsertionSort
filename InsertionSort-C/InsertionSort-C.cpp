// InsertionSort-C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void WriteToConsole(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void InsertionSort(int* arr, int n)
{
	for (int i = 1; i < n; i++)
	{
		const int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		WriteToConsole(arr, n);
	}
}
int main()
{
	const int n = 5;
	int arr[n] = { 61, 21,143,71,123 };

	/*for (int i = 0; i < n; i++)
	{
		printf("Enter the %dth element: ", i + 1);
		scanf("%d", &arr[i]);
	}*/
	printf("Original array: \n");
	WriteToConsole(arr, n);
	printf("----------------\n");

	InsertionSort(arr, n);

	printf("Sorted array: \n");
	printf("----------------\n");
	WriteToConsole(arr, n);
}
