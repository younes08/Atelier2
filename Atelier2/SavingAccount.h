
#include "BankAccount.h"

namespace Bank
{
	class SavingAccount :
		public BankAccount
	{
		private:
			double interestRate;
		
		public:
			SavingAccount(double inter, Client*, Currency*);
			void interestCalculator();
			bool debit(Currency*) override;

	};
}

