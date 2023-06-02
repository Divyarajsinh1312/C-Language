//Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list.

#include <stdio.h>

void swap(int* x, int* y);
void selectionSort(int arry[], int size);
void printArray(int arry[], int size);

// Driver program to test above functions
int main(){
	int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}


//Swaping
void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Sorting of element
void selectionSort(int arry[], int n){
	int min_indx;

	// One by one move boundary of unsorted subarray
	for(int i=0; i<n-1; i++){

		// Find the minimum element in unsorted array
		min_indx=i;
		for(int j=i+1; j<n; j++){
			// Swap the found minimum element with the first element
			if(arry[j]<arry[min_indx]){
				min_indx=j;
			}

			// Swap the found minimum element with the first element
			if (min_indx != i){
				swap(&arry[min_indx], &arry[i]);
			}

		}

	}

}

//Print Array
void printArray(int arry[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", arry[i]);
	}
	printf("\n");
}