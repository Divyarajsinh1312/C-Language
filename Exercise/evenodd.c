#include <stdio.h>

int main(void)
{
	int myNum;
	printf("Enter any Integer for check Even or Odd: ");
	scanf("%d", &myNum);

	if (myNum%2==0)
	{
		printf("Input number is Even\n");
	}
	else{
		printf("Input number is Odd\n");
	}

	return 0;
}