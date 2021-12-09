#include <iostream>
#include "pch.h"
#include "Date.h"

using namespace std;

TimeMachine::Date::Date(unsigned int day, unsigned int mon, unsigned int yr)
{
	this->day = day;
	this->month = mon;
	this->year = yr;
}

void TimeMachine::Date::printDate() const
{
	cout << this->day << "/" << this->month << "/" << this->year;
}
