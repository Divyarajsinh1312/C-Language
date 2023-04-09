/*
1
22
333
4444
55555
*/
#include <stdio.h>

int main(void){
	int row;
	printf("Enter value of Row: ");
	scanf("%d", &row);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("%d", i+1);
		}
		printf("\n");
	}

	return 0;
}