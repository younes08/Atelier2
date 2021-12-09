#pragma once
#include "BankAccount.h"

namespace Bank
{
	class CurrentAccount :
		public BankAccount
	{
		private:
			double minAccBalance;

		public:
			CurrentAccount(double, Client*, Currency*);
			virtual bool debit(Currency*) override;
	};
}

