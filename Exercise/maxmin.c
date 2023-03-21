#include <stdio.h>

int main(void)
{
	int Num1, Num2, Num3;
	
	printf("Enter Number 1: ");
	scanf("%d", &Num1);

	printf("Enter Number 2: ");
	scanf("%d", &Num2);

	printf("Enter Number 3: ");
	scanf("%d", &Num3);

	if (Num1>Num2 && Num1>Num3)
	{
		printf("%d is maximum\n", Num1);
		if (Num2>Num1 && Num2>Num3)
		{
			printf("%d is maximum\n", Num2);
		}
	}
	else{
		printf("%d is maximum\n", Num3);
	}

	return 0;
}