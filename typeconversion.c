#include <stdio.h>

int main(void)
{	
	int x = 2;
	int y = 3;
	float number = x/y; //output is 0.00000
	printf("%f\n", number);

	// Automatic conversion: float to int
	int myInt = 9.99;
	printf("%d\n", myInt); // 9

	//Using type conversion
	//Explicit Conversion (manually)
	int a = 10;
	int b = 6;
	float Num = (float)x/(float)y;
	printf("%f\n", Num);

	return 0;
}