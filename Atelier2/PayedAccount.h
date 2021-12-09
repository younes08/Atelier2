#pragma once
#include "CurrentAccount.h"

namespace Bank
{
	class PayedAccount :
		public CurrentAccount
	{
		private:
			static double TransacFees;
		public:
			PayedAccount(double, Client*, Currency*);
			bool debit(Currency*) override;
	};
}

