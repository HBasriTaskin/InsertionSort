// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void WriteToConsole(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InsertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
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
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << "th element: ";
		cin >> arr[i];
	}

	cout << "\n---------------- \n";
	cout << "Original array: \n";
	WriteToConsole(arr, n);
	cout << "---------------- \n";
	InsertionSort(arr, n);
	cout << "---------------- \n";
	cout << "Sorted array: \n";
	WriteToConsole(arr, n);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
