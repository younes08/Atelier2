#include "pch.h"
#include <cassert>
#include "savingAccount.h"
#include "BankAccount.h"

Bank::SavingAccount::SavingAccount(double inter, Client* owner, Currency* curr):BankAccount(owner, curr)
{
	if (inter >= 0 && inter <= 100)	this->interestRate = inter;
	this->interestRate = 0;
}

void Bank::SavingAccount::interestCalculator()
{
	this->credit(this->BankAccount::interestToValue(this->interestRate));
}

bool Bank::SavingAccount::debit(Currency* val)
{
	if (this->BankAccount::balance_SavingsAcc_Checker(val))
		return this->BankAccount::debit(val);
	return false;
}
