//Tail Recursion
//Recursive call is the last thing done by the function. There is no need to keep record of the previous state

#include <stdio.h>

int tail(int n);

int main(){
	int n = 5;
	tail(n);
	return 0;
}

int tail(int n){
	if(n==0){
		return 0;
	}
	else{
		printf("%d ", n);
	}
	return tail(n-1);
}