//Sum of digit of numbers using recursion

#include <stdio.h>

int sum(int n);

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	int total = sum(n);
	printf("%d", total);
	return 0;
}

int sum(int n){
	if(n==0){
		return 0;
	}
	return ((n%10) + sum(n/10));
}