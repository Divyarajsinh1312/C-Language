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

	for (int i = 0; i < row ; ++i) //Print Row
	{
		for (int j = 0; j <= i; ++j) //Print *
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}