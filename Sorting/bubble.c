//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

//In this algorithm, 
//traverse from left and compare adjacent elements and the higher one is placed at right side. 
//In this way, the largest element is moved to the rightmost end at first. 
//This process is then continued to find the second largest and place it and so on until the data is sorted.

#include <stdio.h>
#include <stdbool.h>

void swap(int* x, int* y);
void bubbleSort(int arry[], int n);
void printArray(int arry[], int n);

int main(){
	int array[] = {5, 10, 68, 1, 2};
	int n = sizeof(array)/sizeof(array[0]);
	bubbleSort(array, n);
	printf("Sorted array: \n");
	printArray(array, n);
	return 0;
}

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arry[], int n){
	bool swapped;

	for(int i=0; i<n-1; i++){
		swapped=false;
		for (int j = 0; j<n-i-1; j++)
		{
			if(arry[j]>arry[j+1]){
				swap(&arry[j], &arry[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}

}

void printArray(int arry[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", arry[i]);
	}
	printf("\n");
}