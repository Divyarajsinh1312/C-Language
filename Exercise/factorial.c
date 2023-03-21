#include <stdio.h>

int main(void)
{
	int myNum, fact=1;
	printf("Enter number to find factorial: ");
	scanf("%d", &myNum);

	int i=1;
	do
	{
		fact *= i;
		i++;
	} while (i<=myNum);
	
	printf("Factorial of %d is %d", myNum, fact);

	return 0;
}