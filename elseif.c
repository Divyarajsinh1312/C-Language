#include <stdio.h>

int main(void)
{
	int myNum;
	printf("Enter any number: ");
	scanf("%d", &myNum);

	if (myNum>0)
	{
		printf("Number is positive\n");
	}
	else if (myNum<0)
	{
		printf("Number is nagative\n");
	}
	else
	{
		printf("Number is 0\n");
	}

	return 0;
}