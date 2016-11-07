#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	double centimeters = 0.0;
	double inches = 0.0;
	int feet = 0;

	printf("Enter a number in centimeters for conversion: ");
	scanf("%lf", &centimeters);

	inches = centimeters / 2.54;
	feet = inches / 12;
	double delta = inches - (feet * 12);

	printf("%.2f cm = %d ft %.3f in", centimeters, feet, delta);

	return EXIT_SUCCESS;
}