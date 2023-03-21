#include <stdio.h>
#include <string.h>

int main(void){
	char myGreetings[] = "Hello, World";
	printf("Print String: %s\n", myGreetings); //Before change a char in string

	printf("Print a single Char from a String: %c\n", myGreetings[4]);

	myGreetings[3] = 'j';
	printf("Print string after modify: %s\n", myGreetings);

	//Print every single char of string using loop
	int n=strlen(myGreetings);
	printf("Every Char of string: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("%c\n", myGreetings[i]);
	}

	return 0;
}