#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double farenheit, kelvin;

	int celsius = 0;
	farenheit = celsius * 9/5 + 32.0;
	kelvin = celsius + 273;
	printf("%d celsius = %.2f farenheit\n", celsius, farenheit);
	printf("%d celsius = %.2f kelvin\n", celsius, kelvin);

	celsius = 100.0;
	farenheit = celsius * 9 / 5 + 32.0;
	kelvin = celsius + 273;
	printf("%d celsius = %.2f farenheit\n", celsius, farenheit);
	printf("%d celsius = %.2f kelvin\n", celsius, kelvin);

	return EXIT_SUCCESS;
}
