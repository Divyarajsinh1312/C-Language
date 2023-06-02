//Call by Reference Function
//We pass address of variable as argument
#include <stdio.h>

void square(int n); //This is Example of Call by Value Function
void _square(int* n); //This is Example of Call by Reference Function

int main(){
	int number = 4;

	square(number);
	printf("number = %d\n", number);

	_square(&number);
	printf("number = %d\n", number);

	return 0;
} 

void square(int n){
	n = n*n;
	printf("Square = %d\n", n);
}

void _square(int* n){
	(*n) = (*n) * (*n);
	printf("Square = %d\n", *n);
}