#include<stdio.h>

int main(void)
{
	int x, y;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	//The if Statement
	if (x>y)
	{
		printf("X is grater than Y\n");
	}

	return 0;
}