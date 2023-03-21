#include <stdio.h>
#include <string.h>

int main(void){
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str1[] = "Hello, ";
	char str2[] = "World!";
	char str3[20];
	char strCmp1[] = "Hi!";
	char strCmp2[] = "Hello, World!";

	//Str Length
	printf("Length of String is  %d\n", strlen(alphabet));

	//Size of String
	/*sizeof will always return the memory size (in bytes), 
	and not the actual string length*/
	printf("Size of String is  %d\n", sizeof(alphabet));

	// Concatenate str2 to str1 (result is stored in str1)
	strcat(str1, str2);
	printf("Print str1 after str2 stored in str1: %s\n", str1);

	//Copy Strings
	strcpy(str3, str1);
	printf("Print str3 after str3 copy of str1: %s\n", str3);

	// Compare str1 and str2, and print the result
	printf("Print comparison of str1 and str3: %d\n", strcmp(str1, str3));
	//Here answer is 0 because str3 is copy of str1

	printf("Print comparison of strCmp2 and strCmp1: %d\n", strcmp(strCmp2, strCmp1));

	return 0;
}