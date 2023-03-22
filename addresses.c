#include <stdio.h>

int main(void){
	char string[] = "Hi!";
	printf("Address of H in memory %p\n", &string[0]);
	printf("Address of i in memory %p\n", &string[1]);
	printf("Address of ! in memory %p\n", &string[2]);

	return 0;
}
