#pragma once
#include "Date.h"
#include "Currency.h"

using namespace TimeMachine;
namespace Bank
{
	class Operation
	{
		private:
			const unsigned int numOp;
			static unsigned int OpCounter;
			Date* date;
			Currency* transferedAmount;
		
		public:
			Operation(Currency*);
			void printOp(char transacType, Currency*);
	};
}
