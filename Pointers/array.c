//*a represent the a[0]th element
#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5};
	printf("a[0] = %d\n", *a);
	printf("a[2] = %d\n", *(a+2));

	//Sum of array element
	int sum = 0;
	for(int i=0; i<5; i++){
		sum += *(a+i);
	}
	printf("Sum of array element is %d\n", sum);

	return 0;
}