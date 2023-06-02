//Sum, Substract, and Product of numbers using Pointers
#include <stdio.h>

void calc(int* a, int* b, char* c);

int main(){
	char choice;
	int num1, num2;

	printf("Enter your Choice from 1)+ 2)- 3)*: \n");
	scanf("%c", &choice);

	printf("Enter value of num1: \n");
	scanf("%d", &num1);
	printf("Enter value of num2: \n");
	scanf("%d", &num2);

	calc(&num1, &num2, &choice);

	return 0;
}

void calc(int* a, int* b, char* c){
	int total;
	if (*c == '+'){
		total = (*a) + (*b);
		printf("Sum is %d\n", total);
	}
	else if(*c == '-'){
		total = (*a) - (*b);
		printf("Substraction is %d\n", total);
	}
	else if(*c == '*'){
		total = (*a) * (*b);
		printf("Product is %d\n", total);
	}
}