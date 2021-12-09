#include "pch.h"
#include "Dollars.h"

using namespace Bank;

Bank::Dollars::Dollars(double val) :Currency(val){}

MAD* Bank::Dollars::convertToMad()
{
	Currency* res = this->RateMultiplier(madRate);
	return res->Currency::convertToMad();
}

Euros* Bank::Dollars::convertToEuro()
{
	Currency* res = this->RateMultiplier(EuroRate);
	return res->Currency::convertToEuro();
}
