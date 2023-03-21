#include <stdio.h>

int main(void)
{
	//Arithmetic Operators

	int x = 10;
	int y = 5;

	printf("%i\n", x+y); //'+' Addition
	printf("%i\n", x-y); //'-' Substraction
	printf("%i\n", x*y); //'*' Multiplication
	printf("%i\n", x/y); //'/' Division
	printf("%i\n", x%y); //'%' Modulus (remainder)

	//Unary Operators
	printf("%i\n", ++x); //'++' Increment
	printf("%i\n", --y); //'--' Decrements
 
	return 0;
}