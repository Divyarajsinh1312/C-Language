#include <stdio.h>

struct car
{
	char brand[50];
	char model[50];
	int year;
};

int main(void){
	struct car car1 = {"Toyota", "Supra", 1980};
	struct car car2 = {"Ford", "MustangGT", 1969};
	struct car car3 = {"Dodge", "Charger", 1979};

	printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  	printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  	printf("%s %s %d\n", car3.brand, car3.model, car3.year);

	return 0;
}