//non-tail Recursion
//If the recursive call is not the last thing done by the function. Aftr returning back, there is something left to evalute

#include <stdio.h>

int nonTial(int n);

int main(){
	int n = 5;
	nonTial(n);
	return 0;
}

int nonTial(int n){
	if(n==0){
		return 0;
	}
	nonTial(n-1);
	printf("%d ", n);
}