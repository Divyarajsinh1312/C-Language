#include <stdio.h>

int main(void)
{
	int height, weight;
	int j=0;
	int k=0;
	for (int i = 1; i <=5; ++i)
	{
		printf("Enter Weight of Student[%d]: ", i);
		scanf("%d", &weight);
		printf("Enter Height of Student[%d]: ", i);
		scanf("%d", &height);

		if (weight<50)
		{
			j++;
		}

		if (height>170)
		{
			k++;
		}
	}

	printf("%d having weight less than 50Kg\n", j);
	printf("%d having height more than 170cm\n", k);

	return 0;
}