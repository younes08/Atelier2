#include "pch.h"
#include <iostream>
#include "Operation.h"

using namespace Bank;
using namespace std;

unsigned int Operation::OpCounter = 0;

Bank::Operation::Operation(Currency* tfdAmount):numOp(OpCounter++)
{
	//should use sysclock but....
	this->date = new Date(8, 3, 2000);

	this->transferedAmount = tfdAmount;
}

void Bank::Operation::printOp(char transacType, Currency* curr)
{
	this->date->printDate();
	cout << "| n°" << this->numOp;

	switch (transacType)
	{
		case 'c': cout << "+"; break;
		case 'd': cout << "-"; break;
		
		default:
			cout << "Invalid Transaction." << endl;
			break;
	}
	curr->printCurr();
}
