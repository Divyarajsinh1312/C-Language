#include <stdio.h>

int areaOfRect(); //Prototype

int main(void){
	int l=10, b=5;
	int area = areaOfRect(l, b); //Call by Value
	printf("Area of Rectngle is %d\n", area);
}

int areaOfRect(int length, int breadth){
	int area;
	area=length*breadth;
	return area;
}