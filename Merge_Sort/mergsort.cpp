
#include <iostream>
using namespace std;

void merge(int array[], int const left, int const mid,
		int const right)
{
	int const subArrayOne = mid - left + 1;
	int const subArrayTwo = right - mid;

	int *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	for (int i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (int j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	int indexOfSubArrayOne
		= 0, 
		indexOfSubArrayTwo
		= 0; 
	int indexOfMergedArray
		= left; 

	while (indexOfSubArrayOne < subArrayOne
		&& indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne]
			<= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray]
				= leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray]
				= rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}

	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray]
			= leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}


	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray]
			= rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

void mergeSort(int array[], int const start, int const end)
{
	if (start >= end)
		return; 

	int mid = start + (end - start) / 2;
	mergeSort(array, start, mid);
	mergeSort(array, mid + 1, end);
	merge(array, start, mid, end);
}


int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = 6;

	

	mergeSort(arr, 0, arr_size - 1);

	

    for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
	return 0;
}
