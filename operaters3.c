#include<stdio.h>

int main(void)
{
	//Logical Operators
	int x = 11;
	int y = 12;

	printf("%i\n", x<y && x>y); //'&&' AND
	printf("%i\n", x>y || x!=y); //'||' OR
	printf("%i\n", !(x<y && x>y)); //'!' NOT

	//Sizeof Operator
	/*
	The memory size (in bytes) of a data type or a variable 
	can be found with the sizeof operator
	*/
	int myInt;
 	float myFloat;
 	double myDouble;
 	char myChar;
 
 	printf("%lu\n", sizeof(myInt)); //long unsigned int (%lu)
 	printf("%lu\n", sizeof(myFloat));
 	printf("%lu\n", sizeof(myDouble));
 	printf("%lu\n", sizeof(myChar));
  
	return 0;
}