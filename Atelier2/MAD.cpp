#include "pch.h"
#include "MAD.h"

using namespace Bank;

Bank::MAD::MAD(double val) :Currency(val){}

Euros* Bank::MAD::convertToEuro()
{
	Currency* res = this->RateMultiplier(EuroRate);
	return res->Currency::convertToEuro();
}

Dollars* Bank::MAD::convertToDoll()
{
	Currency* res = this->RateMultiplier(DollRate);
	return res->Currency::convertToDoll();
}
