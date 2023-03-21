#include <stdio.h>

int main(void)
{	
	int integer = 10; //Integer type
	printf("%i\n", integer); //'%i' or '%d' for integer type output 

	float number = 11.13; //float type
	printf("%f\n", number); //'%f' for float type output

	double doubleNum = 12.13; //double type (long float)
	printf("%lf\n", doubleNum); //'%lf' for double type output

	char character = 'd'; //Stores a single character/letter/number
	printf("%c\n", character); //'%c' for char type output

	char greetings[] = "Hello World!";
 	printf("%s\n", greetings); //'%s' for string output

 	//Set Decimal Precision
 	float myFloatNum = 3.5456789;
	printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
	printf("%.1f\n", myFloatNum); // Only show 1 digit
	printf("%.2f\n", myFloatNum); // Only show 2 digits
	printf("%.4f", myFloatNum);   // Only show 4 digits

	return 0;
}