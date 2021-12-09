#pragma once
#include <vector>
#include "Client.h"
#include "Currency.h"
#include "Operation.h"

namespace Bank
{
	class BankAccount
	{
		private:
			const unsigned int numAcc;
			static unsigned int counter;
			static Currency transLimit;
			Client* owner;
			Currency* balance;
			vector <Operation> OpTrace;
		
		public:
			BankAccount(Client*, Currency*);
			void credit(Currency*);
			virtual bool debit(Currency*);
			bool transfer(Currency*, BankAccount*);
			bool balance_CurrentAcc_Checker(double);
			bool balance_SavingsAcc_Checker(Currency*);
			void addOp(Operation);
			Currency* interestToValue(double);
			void printAcc() const;
			~BankAccount();
	};
}

