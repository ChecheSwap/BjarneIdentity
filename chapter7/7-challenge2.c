#include <stdio.h>
#include <stdlib.h>


// prototypes
void printRecursiveCounter(int lower, int upper);


int main(void) {
	int lower, upper;
	printf("Enter the lower bound for our counter. ");
	scanf("%d", &lower);
	printf("Enter the upper bound for our counter. ");
	scanf("%d", &upper);

	printRecursiveCounter(lower, upper);
	printf("Complete.");
}

void printRecursiveCounter(int lower, int upper) {
	if (lower <= upper) {
		printf("Counter: %d\n", lower);
		printRecursiveCounter(lower + 1, upper);
	}
}