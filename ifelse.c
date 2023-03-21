#include <stdio.h>

int main(void)
{
	int x, y;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	if (x>y)
	{
		printf("X is grater than Y");
	}
	else{
		printf("X is less than or equal to Y");
	}

	return 0;
}