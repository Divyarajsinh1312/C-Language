#include <stdio.h>

int main(void)
{
	char myInput;
	printf("Enter any Character or Number: ");
	scanf("%c", &myInput);

	if (myInput>='A' && myInput<='Z')
	{
		printf("Input Character is Capital");
	}
	else if (myInput>='a' && myInput<='z')
	{
			printf("Input Character is Small");
	}
	else if (myInput>='0' && myInput<='9')
	{
		printf("Input is Digit");
	}
	else
	{
		printf("Input is special Character");
	}

	return 0;
}