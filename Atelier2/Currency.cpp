#include "pch.h"
#include <cassert>
#include "Currency.h"

using namespace Bank;

Bank::Currency::Currency(double value)
{
	this->balance = value;
}

Currency& Bank::Currency::operator+(Currency& bal)
{
	Currency* res = new Currency(this->balance + bal.balance);
	return *res;
}

Currency& Bank::Currency::operator-(Currency& bal)
{
	Currency* res = new Currency(this->balance - bal.balance);
	return *res;
}

Currency& Bank::Currency::operator=(Currency& bal)
{
	if (this != &bal) this->balance = bal.balance;
	return *this;
}

Currency& Bank::Currency::operator/(unsigned int val)
{
	assert(val != 0);
	Currency* res = new Currency(this->balance / val);
	return *res;
}

Currency& Bank::Currency::operator*(double val)
{
	Currency* res = new Currency(this->balance * val);
	return *res;
}

bool Bank::Currency::operator<(Currency& bal)
{
	return this->balance < bal.balance;
}

bool Bank::Currency::operator>(Currency& bal)
{
	return this->balance > bal.balance;
}

MAD* Bank::Currency::convertToMad()
{
	return new MAD(this->balance);
}

Euros* Bank::Currency::convertToEuro()
{
	return new Euros(this->balance);
}

Dollars* Bank::Currency::convertToDoll()
{
	return new Dollars(this->balance);
}

Currency* Bank::Currency::RateMultiplier(double rate)
{
	Currency* newcurr = new Currency(this->balance * rate);
	return newcurr;
}

bool Bank::Currency::isPositive() const
{
	return (this->balance > 0);
}

void Bank::Currency::printCurr() const
{
}
