/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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
			printf("%d ", j+1);
		}
		printf("\n");
	}

	return 0;
}