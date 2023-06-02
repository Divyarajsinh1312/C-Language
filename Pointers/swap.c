//Swap two numbers using Pointers
#include <stdio.h>

void swap(int* x, int* y);

int main(){
	int num1 = 5;
	int num2 = 6;
	printf("Number before Swap num1=%d & num2=%d\n", num1, num2);
	swap(&num1, &num2);
	printf("Number after Swap num1=%d & num2=%d\n", num1, num2);
	return 0;
}

void swap(int* x, int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp; 
}