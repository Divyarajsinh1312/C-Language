#include <stdio.h>

int main(void){
	FILE *fptr;

	fptr = fopen("hello.txt", "r");

	// Print some text if the file does not exist
	if(fptr == NULL) {
  		printf("Not able to open the file.");
	}else{
		// Store the content of the file
		char myString[100];
		// Read the content and store it inside myString
		fgets(myString, 100, fptr);
		// Print the file content
		printf("%s", myString);
	}

	fclose(fptr);

	return 0;
}