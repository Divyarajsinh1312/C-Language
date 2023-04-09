/*
    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE
*/
#include <stdio.h>

int main(void){
	int row;
	printf("Enter value of Row: ");
	scanf("%d", &row);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < row-i-1; ++j)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; ++k)
		{
			printf("%c", 'A'+i);
		}
		printf("\n");
	}

	return 0;
}