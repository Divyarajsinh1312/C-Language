#include <stdio.h>

int main(void)
{
	int myNum, max, min;

	printf("Enter number 1: ");
    scanf("%d", &myNum);
    max = myNum;
    min = myNum;

	for (int input = 1; input <= 10; ++input)
	{
		printf("Enter Number %d: ", input);
		scanf("%d", &myNum);

		if (myNum>max)
		{
			max=myNum;
		}

		if (myNum<min)
		{
			min=myNum;
		}

	}
	printf("%d is Maxmimum\n", max);
	printf("%d is Minimum\n", min);

	return 0;
}