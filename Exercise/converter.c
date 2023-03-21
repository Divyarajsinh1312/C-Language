#include<stdio.h>

int main(void)
{
	float distance;
	printf("Enter distance in Kilometer (float): ");
	scanf("%f", &distance);

	float meter = distance*1000;
	float feet = distance*3280.8399;
	float centimeter = distance*100000;

	printf("Your input in Meter is %.4f\n", meter);
	printf("Your input in Feet is %.4f\n", feet);
	printf("Your input in Centimeter %.4f\n", centimeter);

	return 0;
}