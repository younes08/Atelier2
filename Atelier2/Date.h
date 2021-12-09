#pragma once

namespace TimeMachine
{
	class Date
	{
		private:
			unsigned int day;
			unsigned int month;
			unsigned int year;
		
		public:
			Date(unsigned int, unsigned int, unsigned int);
			void printDate() const;
	};
}

