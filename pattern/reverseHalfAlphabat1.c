/*
AAAAA
BBBB
CCC
DD
E
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
			printf("%c", 'A'+i);
		}
		printf("\n");
	}

	return 0;
}