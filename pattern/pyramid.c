/*
    *
   * *
  * * *
 * * * *
* * * * * 
*/
#include <stdio.h>

int main(void){
	int row;
	printf("Enter value of Row: ");
	scanf("%d", &row);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < row-i; ++j)
		{
			printf(" ");
		}
		for (int k = 0; k < i+1; ++k)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}