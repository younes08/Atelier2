#include "pch.h"
#include "Euros.h"

using namespace Bank;

Bank::Euros::Euros(double val) :Currency(val){}

Dollars* Bank::Euros::convertToDoll()
{
	Currency* res = this->RateMultiplier(DollRate);
	return res->Currency::convertToDoll();
}

MAD* Bank::Euros::convertToMad()
{
	Currency* res = this->RateMultiplier(madRate);
	return res->Currency::convertToMad();
}
