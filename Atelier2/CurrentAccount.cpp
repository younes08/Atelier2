#include "pch.h"
#include "CurrentAccount.h"

Bank::CurrentAccount::CurrentAccount(double val, Client* cli, Currency* curr):BankAccount(cli, curr)
{
	this->minAccBalance = val;
}

bool Bank::CurrentAccount::debit(Currency* balance)
{
	if (this->BankAccount::balance_CurrentAcc_Checker(this->minAccBalance))
		return (this->BankAccount::debit(balance));

	return false;
}
