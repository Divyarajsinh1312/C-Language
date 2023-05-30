//Print 5 to 1 using recursion
//This is example of Direct recursion
#include<stdio.h>

int recursion(int n);

int main(){
	int n=5;
	recursion(n);
	return 0;
}

int recursion(int n){
	if (n==0){
		return 1;
	}
	else{
		printf("%d", n);
		recursion(n-1);
	}
}

