#include <stdio.h>
#include <stdlib.h>
#include "banking.h"

//Global variables
float accountBalance, amount;

int main(void) {
	accountBalance = initializeAccount();
	getBalance(accountBalance);
	//Perform first transaction
	amount = askCustomer();
	accountBalance = updateAccount(amount, accountBalance);
	getBalance(accountBalance);
	//Perform second transaction
	amount = askCustomer();
	accountBalance = updateAccount(amount, accountBalance);
	accountBalance = addGift(5.0, accountBalance);
	getBalance(accountBalance);
	//Perform third transaction
	amount = askCustomer();
	accountBalance = updateAccount(amount, accountBalance);
	accountBalance = addGift(2.0, accountBalance);
	getBalance(accountBalance);
	thankYou();
	return EXIT_SUCCESS;
}




