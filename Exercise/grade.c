#include <stdio.h>

int main(void)
{	
	int studentMark;
	printf("Enter your mark to cheack your grade: ");
	scanf("%d", &studentMark);

	if (studentMark>=80 && studentMark<=100)
	{
		printf("Your mark is %d and Your grade is Distinction", studentMark);
	}
	else if (studentMark>=60 && studentMark<=79)
	{
		printf("Your mark is %d and Your grade is First Class", studentMark);
	}
	else if (studentMark>=40 && studentMark<=59)
	{
		printf("Your mark is %d and Your grade is Second Class", studentMark);
	}
	else{
		printf("Your mark is %d and You are fail in your Exam", studentMark);
	}

	return 0;
}