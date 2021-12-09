#include "pch.h"
#include <assert.h>
#include "BankAccount.h"

using namespace Bank;

unsigned int BankAccount::counter = 0;
Currency BankAccount::transLimit(2000);

Bank::BankAccount::BankAccount(Client* owner, Currency* balance):numAcc(counter++)
{
	this->owner = owner;
	this->balance = balance;
}

void Bank::BankAccount::credit(Currency* balance)
{
	if (balance->isPositive())
	{
		Operation op(balance);

		*(this->balance) = *(this->balance) + *balance;
		this->addOp(op);
		op.printOp('c', balance);
	}
}

bool Bank::BankAccount::debit(Currency* balance)
{
	if (balance->isPositive())
	{
		if (this->balance > balance && balance < &transLimit)
		{
			Operation op(balance);

			*(this->balance) = *(this->balance) - *balance;
			this->addOp(op);
			op.printOp('d', balance);
			return true;
		}
	}
		
	return false;
}

bool Bank::BankAccount::transfer(Currency* balance, BankAccount* acc)
{
	if (this->debit(balance))
	{
		acc->credit(balance);
		return true;
	}
	return false;
}

bool Bank::BankAccount::balance_CurrentAcc_Checker(double minVal)
{
	Currency* minValCurr = new Currency(minVal);
	return this->balance > minValCurr;
}

bool Bank::BankAccount::balance_SavingsAcc_Checker(Currency* money)
{
	return *money < (*(this->balance) / 2);
}

void Bank::BankAccount::addOp(Operation op)
{
	this->OpTrace.push_back(op);
}

void Bank::BankAccount::printAcc() const
{
	this->owner->printCli();
	cout << this->numAcc << "||";
	this->balance->printCurr();
	cout << endl;
}

Currency* Bank::BankAccount::interestToValue(double rate)
{
	Currency* curr = new Currency(rate / 100) ;
	return curr;
}


Bank::BankAccount::~BankAccount()
{
	if (this->balance)
	{
		delete this->balance;
		this->balance = 0;
	}
}
