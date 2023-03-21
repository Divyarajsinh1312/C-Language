#include <stdio.h>

void fun(); //Prototype

int main(void){
	fun(3);
	return 0;
}

void fun(int n){
	if (n==0)
	{
		return;
	}
	fun(n-1);
	printf("%d", n);
}