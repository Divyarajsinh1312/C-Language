//Pointer to Pointer
#include <stdio.h>

int main(){
	int age = 11;
	int *ptr = &age;
	int **pptr = &ptr;
	printf("%d\n", **pptr);
	return 0;
}