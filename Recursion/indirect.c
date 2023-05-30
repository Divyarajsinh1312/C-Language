//Even-Odd
//Output: 2 1 4 3 6 5 8 7 10 9
//Indirect Recursion

#include <stdio.h>
#define N 10

void odd();
void even();

int main(){
	odd();
	return 0;
}

int x = 1;
void odd(){
	if(x<=N){
		printf("%d ", x+1);
		x++;
		even();
	}
	return;
}

void even(){
	if(x<=N){
		printf("%d ", x-1);
		x++;
		odd();
	}
	return;
}