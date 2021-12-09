#pragma once
#include "Currency.h"

namespace Bank
{
	class Dollars :
		public Currency
	{
		private:
			static double madRate;
			static double EuroRate;

		public:
			Dollars(double);
			MAD* convertToMad();
			Euros* convertToEuro();
	};
}

