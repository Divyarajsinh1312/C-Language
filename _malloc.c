//The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.

/*	
	ptr = (int*) malloc(100 * sizeof(int));
	Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	ptr = (int *)malloc(5 * sizeof(int));

	ptr[0]=1;
	ptr[1]=2;
	ptr[2]=6;
	ptr[3]=4;
	ptr[4]=7;

	for(int i=0; i<5; i++){
		printf("%d\n", ptr[i]);
	}

	return 0;
}