#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; ++i) //Outer loop
	{
		printf("Outer: %d\n", i);

		for (int j = 0; j < 3; ++j) //Inner loop
		{
			printf(" Inner: %d\n", j);
		}
	}

	return 0;
}