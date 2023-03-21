#include <stdio.h>

int main(void)
{
	int myNum, first_term=0, second_term=1, next_term;
	printf("Enter Value: ");
	scanf("%d", &myNum);

	for (int i = 0; i <= myNum; ++i)
	{	
		printf("%d,", first_term);
		next_term=first_term+second_term;
		first_term=second_term;
		second_term=next_term;
	}

	return 0;
}