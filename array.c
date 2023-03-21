#include <stdio.h>

int main(void){
	int myNumbers[] = {1,2,3,4,5};
	printf("Number at 0th position is %d\n", myNumbers[0]);

	printf("3rd position number before Change is %d\n", myNumbers[2]);
	myNumbers[2] = 25; //Change the 3rd position element
	printf("3rd position Number is %d\n", myNumbers[2]);

	//print all number from array
	for (int i = 0; i < 5; ++i)
	{
		printf("Number at [%d]: %d\n", i, myNumbers[i]);
	}

	return 0;
}