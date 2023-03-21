#include <stdio.h>

int main(void)
{
	int myNum;
	printf("Enter any Number: ");
	scanf("%d", &myNum);

	if (myNum>0)
	{
		printf("%d is Positive Number", myNum);
	}
	else if (myNum<0)
	{
		printf("%d is Nagative Number", myNum);
	}
	else{
		printf("%d is zero\n", myNum);
	}

	return 0;
}