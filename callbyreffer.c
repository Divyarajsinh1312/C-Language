#include <stdio.h>

int call_by_reference();

int main(void){
	int x=10, y=20;
	printf("Value of x is: %d\n", x); //Value before use function
	printf("Value of y is: %d\n", y);

	call_by_reference(&x, &y);
	printf("Value of x after call Function: %d\n", x);
	printf("Value of y after call Function: %d\n", y);

	return 0;
}

int call_by_reference(int *ptr1, int *ptr2){
	*ptr1 = 1000;
	*ptr2 = 2000;

	return 0;
}