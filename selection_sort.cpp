#include <iostream>

using namespace std;

void swap(int arr[], int firstIndex, int secondIndex){
	int temp;
	temp = arr[firstIndex];
	arr[firstIndex] = arr[secondIndex];
	arr[secondIndex] = temp;
}

int indexOfMinimum(int arr[], int startIndex, int n){
	int minValue = arr[startIndex];
	int minIndex = startIndex;
	
	for(int i = minIndex + 1; i < n; i++){
		if(arr[i] < minValue){
			minIndex = i;
			minValue = arr[i];
		}
	}
	
	return minIndex;
}

void selectionSort(int arr[], int n){
	for(int i = 0; i < n; i++){
		int index = indexOfMinimum(arr, i, n);
		swap(arr, i, index);
	}
}

void printArray(int arr[], int size){
	int i;
	for(i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[] = {30, 20, 5, 6, 8, 1, 7, 25, 10, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted array : " << endl;
	printArray(arr, n);
	return 0;
}
