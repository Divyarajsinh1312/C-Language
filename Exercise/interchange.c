#include <stdio.h>

int main(void)
{	
	int a, b, temp;
	
	printf("Enter value of a: ");
	scanf("%d", &a);

	printf("Enter value of b: ");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("After interchanging value of a is: %d\n", a);
	printf("After interchanging value of b is: %d\n", b);

	return 0;
}