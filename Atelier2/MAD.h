#pragma once
#include "Currency.h"

namespace Bank
{
	class MAD :
		public Currency
	{
		private:
			static double EuroRate;
			static double DollRate;

		public:
			MAD(double);
			Euros* convertToEuro() override;
			Dollars* convertToDoll() override;
	};
}

