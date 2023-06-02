/*
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
>>>It initializes each block with a default value ‘0’.
>>>It has two parameters or arguments as compare to malloc().
*/

/*
	ptr = (cast-type*)calloc(n, element-size);
	here, n is the no. of elements and element-size is the size of each element.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	ptr = (int *)calloc(5, sizeof(int));

	ptr[0]=1;
	ptr[1]=2;
	//ptr[2]=0; Becuase calloc() intializes each block with a default value '0'
	ptr[3]=4;
	ptr[4]=7;

	for(int i=0; i<5; i++){
		printf("%d\n", ptr[i]);
	}

	return 0;
}
