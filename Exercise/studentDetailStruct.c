#include <stdio.h>

struct Student
{
	char name[50];
	int rollNo;
	float mark;
};

int main(void){
	int n;
	printf("How many Student's details you want to enter: ");
	scanf("%d", &n);
	struct Student student[n];

	for (int i = 1; i <= n; ++i)
	{
		printf("\n\n--------------------Enter Student-%d Detail--------------------\n", i);
		printf("Enter Name: ");
		scanf("%s", &student[i].name);
		printf("Enter Roll No.: ");
		scanf("%i", &student[i].rollNo);
		printf("Enter Mark: ");
		scanf("%f", &student[i].mark);
	}

	printf("\n\n ------------ All Students Detail ------------ \n\n");
	for (int i = 1; i <= n; ++i)
	{
		printf("%s %d %0.3f\n", student[i].name, student[i].rollNo, student[i].mark);
	}
	return 0;
}