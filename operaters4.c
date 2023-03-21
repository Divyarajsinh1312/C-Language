#include <stdio.h>

int main(void)

{
	//Bitwise Operators

	// a = 5(00000101), b = 9(00001001)
    char a = 5, b = 9;
  	
  	printf("a = %d, b = %d\n", a, b);

    // The result is 00000001
    printf("a&b = %d\n", a & b); //AND
  
    // The result is 00001101
    printf("a|b = %d\n", a | b); //OR
  
    // The result is 00001100
    printf("a^b = %d\n", a ^ b); //XOR
  
    // The result is 11111010
    printf("~a = %d\n", a = ~a); //NOT
  
    // The result is 00010010
    /*Takes two numbers, 
    left shifts the bits of the first operand, 
    the second operand decides the number of places to shift.*/
    printf("b<<1 = %d\n", b << 1);

    // The result is 00000100
    /* takes two numbers, 
    right shifts the bits of the first operand, 
    the second operand decides the number of places to shift. */
    printf("b>>1 = %d\n", b >> 1);

	return 0;
}