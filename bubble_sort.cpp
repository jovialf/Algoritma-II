#include <iostream>

using namespace std;

void printArray(int arr[], int size){
	int a;
	for(a=0; a<size; a++){
		cout << arr[a] << " ";
	}
	cout << endl;
}

void bubbleSort(int arr[], int size){
	
	
	int a, temp;
	int b = 0;
	bool swap;
	do{
		swap = false;
		for(a=0; a<size-1; a++){
			if(arr[a] > arr[a+1]){
				temp = arr[a+1];
				arr[a+1] = arr[a];
				arr[a] = temp;
				
				swap = true;
				b++;
			}
		}
	}while(swap == true);
	
}

int main(){
	int arr[] = {30, 20, 5, 6, 8, 1, 7, 25, 10, 11};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout << "BUBBLE SORT" << endl << endl;
	
	cout << "Sebelum sort : " << endl;
	printArray(arr, size);
	
	bubbleSort(arr, size);
	
	cout << endl;
	cout << "Setelah sort : " << endl;
	printArray(arr, size);
}
