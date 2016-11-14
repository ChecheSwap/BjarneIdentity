#include <stdio.h>
#include "banking.h"

float initializeAccount(void) {
	return 0.0;
}

float addGift(float giftAmount, float accountBalance) {
	accountBalance += giftAmount;
	printf("Congratulations! A gift of $%.2f has been added to your account\n", giftAmount);
	return accountBalance;
}

float askCustomer(void) {
	float amount;
	printf("Next transaction please...\n");
	printf("Enter amount to credit (positive) or debit (negative):");
	scanf("%f", &amount);
	return amount;
}

void getBalance(float accountBalance) {
	printf("\nThe current balance in the account is $%.2f\n", accountBalance);
}

float updateAccount(float amount, float accountBalance) {
	accountBalance += amount;
	printf("The account was updated with $%.2f\n", amount);
	return accountBalance;
}

void thankYou(void) {
	printf("------  Thank you!  ------");
}