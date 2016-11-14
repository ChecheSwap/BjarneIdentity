#include <stdio.h>
#include <stdlib.h>

// prototypes
void printMessage(int choice);

float price;
float buy = 20.00;
float sell = 40.00;

int main(void) {
	printf("Please enter the current stock price.");
	scanf("%f", &price);

	if (price < buy) {
		printMessage(1);
	}
	else if (price > sell) {
		printMessage(2);
	}
	else
	{
		printMessage(3);
	}
}

void printMessage(int choice) {
	switch (choice){
		case 1: 
			printf("You should buy this stock now!");
			break;
		case 2:
			printf("You should sell this stock now!");
			break;
		case 3:
			printf("You should hold onto this stock for now.");
			break;
		default:
			printf("An error occurred. You should jump out the window.");
	}
}