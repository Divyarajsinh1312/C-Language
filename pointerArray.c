#include <stdio.h>

int main(void){
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr;
	int count;

	ptr = &arr[0];
	count = 0;

	printf("Accessing array elements using pointer: \n");
	while(count<5){
		printf("Arr[%d] = %d\n", count, *ptr);

		//move pointer to next array element
		ptr++;

		count++;
	}  

	return 0;
} 