#include <stdio.h>

int main(void)
{
	int myAge = 16;
	switch(myAge){
		case 17:
			printf("Your age is 17\n");
			break;
		case 16:
			printf("Your age is 16\n");
			break;
		default:
			printf("Your data is not available");
	}

	return 0;
}