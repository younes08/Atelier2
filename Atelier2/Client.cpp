#include "pch.h"
#include "Client.h"

Bank::Client::Client(string, string, string)
{
}

void Bank::Client::addAcc(BankAccount* acc)
{
	this->accounts.push_back(acc);
}

void Bank::Client::printCli()
{
	cout << this->lname << " " << this->fname << endl << this->adr << endl;
}

Bank::Client::~Client()
{
	//destruct vector!!!!!!!!!!!!!
}
