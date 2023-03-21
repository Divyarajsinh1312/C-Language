#include <stdio.h>

int main(void)
{	
	//Comparison Operators
	/*
		The return value of a comparison is either 1 or 0,
		which means true (1) or false (0). 
		These values are known as Boolean values
	*/
	int x = 10;
	int y = 5;

	printf("%i\n", x==y); //Equal to
	printf("%i\n", x!=y); //not Equal
	printf("%i\n", x>y);  //greater than
	printf("%i\n", x<y);  //less than
	printf("%i\n", x>=y); //greater than or equal to
	printf("%i\n", x<=y); //less than or equal to

	return 0;
}