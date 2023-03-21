#include<stdio.h>

int main(void)
{
	int Age, Mark;
	printf("Enter your Age: \n");
	printf("Enter your Mark: \n");
	scanf("%d%d", &Age, &Mark);

	switch(Age){
		case 10:
			printf("Your age is 10\n");
			switch(Mark){
				case 45:
					printf("Your mark is 45\n");
					break;
				default:
					printf("Your data is not available\n");
			}
			break;
		case 11:
			printf("Your age is 11\n");
			switch(Mark){
				case 46:
					printf("Your mark is 46\n");
					break;
				default:
					printf("Your data is not available\n");
			}
			break;
		default:
			printf("Your data is not available");
		
	}
	return 0;
}