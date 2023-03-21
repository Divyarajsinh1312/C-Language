#include <stdio.h>

int fact(int myNum){
	if (myNum==1)
	{
		return 1;
	}else{
		return myNum*fact(myNum-1);
	}
}

int main(void)
{
	int myNum;
	printf("Enter Value for find Factorial: ");
	scanf("%d", &myNum);
	printf("Factorial of %d is %d\n", myNum, fact(myNum));

	return 0;
}