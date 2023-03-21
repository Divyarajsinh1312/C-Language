#include <stdio.h>

int main(void){
	int multiArray[3][3] = {{1,2,3}, 
							{4,5,6},
							{7,8,9}}; //3*3 2D Array
	printf("Value of [2][0]: %d\n", multiArray[2][0]);

	printf("3rd position number before Change is %d\n", multiArray[1][1]);
	multiArray[1][1] = 25; //Change the 2row and 2col position element
	printf("3rd position Number is %d\n", multiArray[1][1]);

	printf("_______________________________________________________________\n");

	//Input value in 2D Array
	int x = 2;
	int y = 2;
	int loopArray[x][y]; 

	for (int i = 0; i < x; ++i) //Row
	{
		for (int j = 0; j < y; ++j) //Col
		{
			printf("Enter %d%d: ", i+1, j+1);
			scanf("%d", &multiArray[i][j]);
		}
	}
	printf("\nDisplaying values: \n\n");

	// Using nested loop to display values of a 2D array
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			printf("%d\t", multiArray[i][j]);

			if (j == 1){
			 	printf("\n");
			}	
		}
	}

	return 0;
}