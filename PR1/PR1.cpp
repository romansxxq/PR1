#include <iostream>

// Задача 1:

//void bubleSort(int arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	cout << "Array:\n";
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//
//	bubleSort(arr, size);
//	cout << "Sorted array: \n";
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//	return 0;
//}

// Задача 2:
using namespace std;
void bubbleSort(int arr[], int size, bool ascending)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if ((ascending && arr[j] > arr[j + 1]) ||
				(!ascending && arr[j] < arr[j + 1]))
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void Show(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Original array:\n";
	Show(arr, size);

	int choice;
	bool ascending;

	while (true) {
		cout << "1. Bubble sort (ascending order)\n";
		cout << "2. Bubble sort (descending order)\n";
		cout << "0. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 0)
			break;
		switch (choice) {
		case 1:
			ascending = true;
			break;
		case 2:
			ascending = false;
			break;
		default:
			cout << "Invalid choice. Try again.\n";
			continue;
		}

		bubbleSort(arr, size, ascending);
		cout << "Sorted array: \n";
		Show(arr, size);
	}

	return 0;
}