#include <iostream>
using namespace std;
//Задача 1:
//#include <iostream>
//using namespace std;
//
//void bubbleSort(int arr[], int size, bool ascending)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if ((ascending && arr[j] > arr[j + 1]) ||
//				(!ascending && arr[j] < arr[j + 1]))
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void Show(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//
//int main()
//{
//	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	cout << "Original array:\n";
//	Show(arr, size);
//
//	int choice;
//	bool ascending;
//
//	while (true) {
//		cout << "1. Bubble sort (ascending order)\n";
//		cout << "2. Bubble sort (descending order)\n";
//		cout << "0. Exit\n";
//		cout << "Enter your choice: ";
//		cin >> choice;
//
//		if (choice == 0)
//			break;
//		switch (choice) {
//		case 1:
//			ascending = true;
//			break;
//		case 2:
//			ascending = false;
//			break;
//		default:
//			cout << "Invalid choice. Try again.\n";
//			continue;
//		}
//
//		bubbleSort(arr, size, ascending);
//		cout << "Sorted array: \n";
//		Show(arr, size);
//	}
//
//	return 0;
//}

//Задача 2:

//void bubbleSortBasic(int arr[], int size, bool ascending)
//{
//	int comparisons = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			comparisons++;
//			if ((ascending && arr[j] > arr[j + 1]) ||
//				(!ascending && arr[j] < arr[j + 1]))
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << "Comparisons (basic): " << comparisons << endl;
//}
//
//void bubbleSortOptimized(int arr[], int size, bool ascending)
//{
//	int comparisons = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		bool swapped = false;
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			comparisons++;
//			if ((ascending && arr[j] > arr[j + 1]) ||
//				(!ascending && arr[j] < arr[j + 1]))
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				swapped = true; 
//			}
//		}
//		if (!swapped)
//			break;
//	}
//	cout << "Comparisons (optimized): " << comparisons << endl;
//}
//void Show(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//void copyArray(int source[], int dest[], int size)
//{
//	for (int i = 0; i < size; i++)
//		dest[i] = source[i];
//}
//
//int main()
//{
//	int original[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int size = sizeof(original) / sizeof(original[0]);
//
//	int arr1[100], arr2[100]; 
//
//	copyArray(original, arr1, size);
//	copyArray(original, arr2, size);
//
//	cout << "Original array:\n";
//	Show(original, size);
//
//	cout << "\n--- Basic Bubble Sort ---\n";
//	bubbleSortBasic(arr1, size, true);
//	Show(arr1, size);
//
//	cout << "\n--- Optimized Bubble Sort ---\n";
//	bubbleSortOptimized(arr2, size, true);
//	Show(arr2, size);
//
//	return 0;
//}

//Задача 3:

//#include <iostream>
//#include <cstdlib>  
//#include <ctime>     
//using namespace std;
//
//void bubbleSortOptimized(int arr[], int size, bool ascending, int& comparisons, int& swaps)
//{
//    comparisons = 0;
//    swaps = 0;
//
//    for (int i = 0; i < size - 1; i++)
//    {
//        bool swapped = false;
//        for (int j = 0; j < size - i - 1; j++)
//        {
//            comparisons++;
//            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1]))
//            {
//                swap(arr[j], arr[j + 1]);
//                swaps++;
//                swapped = true;
//            }
//        }
//        if (!swapped)
//            break;
//    }
//}
//
//void Show(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//void generateRandomArray(int arr[], int size, int min = 1, int max = 100)
//{
//    for (int i = 0; i < size; i++)
//        arr[i] = rand() % (max - min + 1) + min;
//}
//
//void TestCase(string name, int arr[], int size)
//{
//    int copy[100];
//    for (int i = 0; i < size; i++) copy[i] = arr[i];
//
//    int comparisons, swaps;
//    bubbleSortOptimized(copy, size, true, comparisons, swaps);
//
//    cout << "--- " << name << " ---\n";
//    Show(copy, size);
//    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << "\n\n";
//}
//
//int main()
//{
//    srand(time(0));
//
//    const int size = 10;
//    int random[size], sorted[size], reversed[size], duplicates[size];
//
//    generateRandomArray(random, size);
//
//    for (int i = 0; i < size; i++) sorted[i] = i + 1;
//
//    for (int i = 0; i < size; i++) reversed[i] = size - i;
//
//    for (int i = 0; i < size; i++) duplicates[i] = (i % 2 == 0) ? 5 : 3;
//
//    TestCase("Random", random, size);
//    TestCase("Sorted", sorted, size);
//    TestCase("Reversed", reversed, size);
//    TestCase("Duplicates", duplicates, size);
//
//    return 0;
//}

//Задача 4:

//#include <iostream>
//#include <algorithm> 
//#include <ctime>     
//#include <cstdlib>    
//using namespace std;
//
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void selectionSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        int minIndex = i;
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//        if (minIndex != i) {
//            swap(arr[i], arr[minIndex]);
//        }
//    }
//}
//
//void Show(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void generateRandomArray(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 1000;  
//    }
//}
//
//int main() {
//    const int n = 10000; 
//    int arr1[n];
//    int arr2[n];
//
//    generateRandomArray(arr1, n);
//    generateRandomArray(arr2, n);
//
//    clock_t start = clock();
//    bubbleSort(arr1, n);
//    clock_t end = clock();
//    double bubbleSortTime = double(end - start) / CLOCKS_PER_SEC;
//
//    cout << "Bubble Sort Time: " << bubbleSortTime << " seconds" << endl;
//
//    start = clock();
//    selectionSort(arr2, n);
//    end = clock();
//    double selectionSortTime = double(end - start) / CLOCKS_PER_SEC;
//
//    cout << "Selection Sort Time: " << selectionSortTime << " seconds" << endl;
//
//    return 0;
//}

//Задача 5:

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

void copyArray(int src[], int dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void runTests() {
    int test1[] = { 5, 2, 9, 1, 5, 6 };
    int test2[] = { 1, 2, 3, 4, 5 };
    int test3[] = { 9, 8, 7, 6, 5 };
    int test4[] = { 3 };
    int* test5 = nullptr;

    int size1 = 6, size2 = 5, size3 = 5, size4 = 1, size5 = 0;
    int temp[100];

    cout << "=== Testing Sorting Algorithms ===" << endl;

    copyArray(test1, temp, size1);
    bubbleSort(temp, size1);
    cout << "Test 1 (bubble): " << (isSorted(temp, size1) ? "OK" : "FAIL") << endl;

    copyArray(test2, temp, size2);
    bubbleSort(temp, size2);
    cout << "Test 2 (bubble): " << (isSorted(temp, size2) ? "OK" : "FAIL") << endl;

    copyArray(test3, temp, size3);
    selectionSort(temp, size3);
    cout << "Test 3 (selection): " << (isSorted(temp, size3) ? "OK" : "FAIL") << endl;

    copyArray(test4, temp, size4);
    bubbleSort(temp, size4);
    cout << "Test 4 (bubble): " << (isSorted(temp, size4) ? "OK" : "FAIL") << endl;

    copyArray(test5, temp, size5);
    selectionSort(temp, size5);
    cout << "Test 5 (selection): " << (isSorted(temp, size5) ? "OK" : "FAIL") << endl;
}

void testPerformance(void (*sortFunc)(int[], int), const string& name, int size) {
    int* arr = new int[size];
    int* copy = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100000;
    }
    copyArray(arr, copy, size);

    clock_t start = clock();
    sortFunc(copy, size);
    clock_t end = clock();

    double duration = double(end - start) / CLOCKS_PER_SEC;
    cout << name << " (" << size << " elements): " << duration << " seconds" << endl;

    delete[] arr;
    delete[] copy;
}

int main() {
    srand(time(0));
    runTests();

    cout << "\n=== Performance Comparison ===" << endl;
    testPerformance(bubbleSort, "Bubble Sort", 10000);
    testPerformance(selectionSort, "Selection Sort", 10000);
    testPerformance(bubbleSort, "Bubble Sort", 50000);
    testPerformance(selectionSort, "Selection Sort", 50000);

    return 0;
}
