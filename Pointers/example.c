//This is example of Pointer

#include <stdio.h>

int main(){
	int age = 12; //Age = 12
	int *ptr = &age; //In pointer var 'ptr' store the address of 'age'
	int _age = *ptr; //In _age we store value of age using address

	printf("%d\n", _age);
    printf("%p", &age); //Print address

	return 0;
}
//For print the value
//age
//*ptr
//*(&age)
