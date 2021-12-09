#pragma once
#include "Currency.h"

namespace Bank
{
	class Euros :
		public Currency
	{
		private:
			static double madRate;
			static double DollRate;
	
		public:
			Euros(double);
			virtual Dollars* convertToDoll();
			virtual MAD* convertToMad();
	};
}


