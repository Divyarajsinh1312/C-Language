#include <stdio.h>

struct student
{
	char name[40]; 
	int age;
	float CPI;
};

int main(void){
	// Declare student variable
	struct student student1;
	struct student student2 = {"Eminem", 18, 9.8};
	struct student student3;

	student3=student2; //Copy of Structure

	printf("Enter student name: ");
	scanf("%s", &student1.name);
	printf("Enter student age: ");
	scanf("%i", &student1.age);
	printf("Enter student CPI: ");
	scanf("%f", &student1.CPI);

	printf("\n--------------------Student Detail--------------------\n\n");

	printf("Student name: %s\n", student1.name);
	printf("Student Age: %i\n", student1.age);
	printf("Student CPI: %0.2f\n", student1.CPI);

	printf("\n--------------------Student Detail--------------------\n\n");

	printf("Student name: %s\n", student2.name);
	printf("Student Age: %i\n", student2.age);
	printf("Student CPI: %0.2f\n", student2.CPI);

	printf("\n--------------------Student Detail--------------------\n\n");

	printf("Student name: %s\n", student3.name);
	printf("Student Age: %i\n", student3.age);
	printf("Student CPI: %0.2f\n", student3.CPI);



	return 0;
}