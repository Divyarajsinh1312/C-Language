#include <stdio.h>

int main(void)
{
	int h, b;
	printf("Enter H: \n");
	printf("Enter B: \n");
	scanf("%d%d", &h, &b);

	float area = (float)h * (float)b * 0.5;

	printf("Area of triangle is %.3f\n", area);

	return 0;
}