#include<stdio.h>

int main(void)
{
	int input, myNum, sum=0;
	printf("How many number you want to enter: ");
	scanf("%d", &input);

	for (int i = 1; i <=input; ++i)
	{
		printf("Enter number [%d]", i);
		scanf("%d", &myNum);
		sum+=myNum;
	}
	float avarage=(float)sum/(float)input;
	printf("Sum of input number is %d\n", sum);
	printf("Avarage of input is %.4f", avarage);
	

	return 0;
}