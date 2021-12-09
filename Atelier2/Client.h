#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "BankAccount.h"

using namespace std;
namespace Bank
{
	class Client
	{
		private:
			string fname;
			string lname;
			string adr;
			vector <BankAccount*> accounts;///whhy pointer
		
		public:
			Client(string, string, string);
			void addAcc(BankAccount*);
			void printCli();
			~Client();
	};
}

