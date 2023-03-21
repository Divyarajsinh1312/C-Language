//Sum of 2*2 matrix using 2D Array
#include <stdio.h>

int main(void){
	float a[2][2], b[2][2], result[2][2];

	//Taking value for matrix a
	printf("Enter value in matrix a:\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			scanf("%f", &a[i][j]);

		}
	}

	//Taking value for matrix b
	printf("\nEnter value in matrix b:\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			scanf("%f", &b[i][j]);
		}
	}

	//adding corresponding elements of two array
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			result[i][j] = a[i][j]+b[i][j];
		}
	}

	//display result value
	printf("\nSum of sum a & b:\n");
	for (int i = 0; i < 2; ++i)
	 {
	 	for (int j = 0; j < 2; ++j)
	 	{
	 		printf("%0.1f\t", result[i][j]);

	 		if (j==1)
	 		{
	 			printf("\n");
	 		}
	 	}
	 } 

	return 0;
}