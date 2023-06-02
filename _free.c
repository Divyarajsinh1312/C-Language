//“free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int *ptr;
	int n, i;

	// Get the number of elements for the array
	n = 5;
	printf("Enter number of elements: %d\n", n);

	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");
		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}
		//Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

		// Free the memory
		free(ptr);
		printf("\nMalloc Memory successfully freed.\n");

		// Memory has been successfully allocated
		ptr = (int*)malloc(2 * sizeof(int));
		printf("\nMemory successfully allocated using malloc.\n");
		ptr[0]=1;
		ptr[1]=2;
		for(int i=0; i<2; i++){
			printf("%d\n", ptr[i]);
		}

		// Free the memory
		free(ptr);
		printf("Malloc Memory successfully freed.\n");
	}

	return 0;
}
