#include <stdio.h>

int main(void)
{
	char stdName[15];
	int stdMark, sum=0;

	for (int i = 0; i <= 5; ++i)
	{
		printf("Enter Student Name: ");
		scanf("%s", &stdName);
		
		printf("--------------------------------------\n");

		for (int j = 1; j <= 3; ++j)
		{
			printf("Enter mark of Subject[%d]: ", j);
			scanf("%d", &stdMark);
			sum+=stdMark;
		}

		printf("--------------------------------------\n");

		float avarage=(float)sum/(float)3;
		printf("Sum of mark is %d\n", sum);
		printf("Avarage is %f\n", avarage);

		printf("*************************************\n\n");
	}

	return 0;
}