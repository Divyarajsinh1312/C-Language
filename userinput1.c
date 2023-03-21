#include <stdio.h>

int main(void)
{
	int Age;
	char Name[30];

	printf("Type a number AND a character and press enter: \n");
	scanf("%d%s", &Age, &Name);
	printf("Your age is %d\n", Age);
	printf("Your name is %s\n", Name);
	
	return 0;
}