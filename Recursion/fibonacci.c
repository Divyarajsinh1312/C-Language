//Fibonacci using recursion
#include <stdio.h>

int fibo(int n);

int main(){
	int n = 6;
	printf("%d Fibonacci term is %d", n, fibo(n));
	return 0;
}

int fibo(int n){
	if (n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else{
		return(fibo(n-1)+fibo(n-2));
	}
}