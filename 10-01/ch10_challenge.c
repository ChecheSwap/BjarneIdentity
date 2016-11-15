#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// prototypes
void generateDataSet(int size);
void printDataSetGraph(void);

// globals
int dataSet[SIZE];

int main(void) {
	generateDataSet(SIZE);
	printDataSetGraph();
}

void generateDataSet(int size) {
	srand(time(NULL));
	for (int x = 0; x < size; x += 1) {
		dataSet[x] = rand() % 50;
	}
}

void printDataSetGraph(void) {
	for (int x = 0; x < SIZE; x += 1) {
		printf("%3d: ", dataSet[x]);
		for (int y = 0; y < dataSet[x]; y += 1) {
			printf("-");
		}
		printf("\n");
	}
}
