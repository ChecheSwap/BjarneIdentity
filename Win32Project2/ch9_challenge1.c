#include <stdio.h>
#include <stdlib.h>

#define BARS 10

// functions
void printBarGraph(int numDots);
void printAllBarGraphs(void);


int main(void) {
	printAllBarGraphs();
	return EXIT_SUCCESS;
}

void printBarGraph(int numDots) {
	for (int x = 0; x < numDots; x += 1) {
		printf("*");
	}
}

void printAllBarGraphs() {
	int counter = BARS;
	while (counter > 1) {
		printBarGraph(counter);
		printf("\n");
		counter -= 1;
	}
}