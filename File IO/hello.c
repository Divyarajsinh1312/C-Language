#include <stdio.h>

int main(void){
	FILE *fptr;

	//Create a File
	fptr = fopen("hello.txt", "w");

	//Write somthing in file
	fprintf(fptr, "hello, Coding");

	//Close the File
	fclose(fptr);

	return 0;
}