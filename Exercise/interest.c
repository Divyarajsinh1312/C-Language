#include <stdio.h>

int main(void)
{
	int p;
	float r, n;
	printf("Enter Principal Amount: \n");
	printf("Enter Rate(float): \n");
	printf("Enter Number of Years(float)\n");
	scanf("%d%f%f", &p,&r,&n);

	float i= (float)p * r * n;
	float interest = i/100;

	printf("Your interest is %.3f\n", interest);

	return 0;
}