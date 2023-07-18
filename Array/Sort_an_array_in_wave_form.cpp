#include<iostream>
using namespace std;


// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >=
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....
void sortInWave(int arr[], int n)
{
	// Traverse all even elements
	for (int i = 0; i < n; i+=2)
	{
		// If current even element is smaller than previous
		if (i>0 && arr[i-1] > arr[i] )
			swap(arr[i], arr[i-1]);

		// If current even element is smaller than next
		if (arr[i] < arr[i+1] )
			swap(arr[i], arr[i + 1]);
	}
}

int main()
{
	int arr[] = {10, 5, 6, 3, 2, 20, 100, 80,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortInWave(arr, n);
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";
	return 0;
}
