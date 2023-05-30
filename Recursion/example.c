#include<stdio.h>

int print(int n);

int main(){
	int n = 4;
	printf("%d", print(n));
	return 0;

}

int print(int n){
	if (n==1)
	{
		return 1;
	}
	else{
		return 1 + print(n-1);
	}
} 

