#include "pch.h"
#include "PayedAccount.h"

using namespace Bank;

double PayedAccount::TransacFees = 0.05;

Bank::PayedAccount::PayedAccount(double val, Client* cli, Currency* curr) :CurrentAccount(val, cli, curr){}

bool Bank::PayedAccount::debit(Currency* val)
{
	*val = *val - (*val * TransacFees);
	return this->CurrentAccount::debit(val);
}
