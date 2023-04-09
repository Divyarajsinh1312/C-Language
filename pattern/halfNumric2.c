/*
    1
   12
  123
 1234
12345
*/
#include <stdio.h>

int main(void){
	int row;
	printf("Enter value of Row: ");
	scanf("%d", &row);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 1; j < row-i; ++j)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; ++k)
		{
			printf("%d", k+1);
		}
		printf("\n");
	}

	return 0;
}