#include <stdio.h>

int main(void)
{	
	/*
		const int myNum = 15;  // myNum will always be 15
		myNum = 10;  // error: assignment of read-only variable 'myNum'
	*/
	const int Num = 10;
	printf("%i\n", Num);

	return 0;
}