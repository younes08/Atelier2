#pragma once
#include "Dollars.h"
#include "Euros.h"
#include "MAD.h"

namespace Bank
{
	class Currency
	{
		private:
			double balance;
	
		public:
			Currency(double);
			Currency& operator+(Currency& bal);
			Currency& operator-(Currency& bal);
			Currency& operator=(Currency& bal);
			Currency& operator/(unsigned int);
			Currency& operator*(double);
			bool operator< (Currency& bal);
			bool operator> (Currency& bal);
			virtual MAD* convertToMad(); 
			virtual Euros* convertToEuro();
			virtual Dollars* convertToDoll();
			Currency* RateMultiplier(double);
			bool isPositive() const;
			void printCurr() const;
	};
}

