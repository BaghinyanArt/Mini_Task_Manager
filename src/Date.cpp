#include "Date.h"
#include <stdexcept>
using namespace std;

const array<unsigned int, 13> daysInMonth{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date(unsigned int y, unsigned int m, unsigned int d){
	if (y < 1800 || y > 2200) {
		throw out_of_range("Year must be in range 1800 - 2200");
	}
	year = y;
	if (m < 1 || m > 12) {
		throw out_of_range("The numbers which identify the month must be in range 1 - 12");
	}
	month = m;
	if (d < 1 || d > 31) {
		throw out_of_range("The days must be in range 1 - 31");
	}
	int maxDays = daysInMonth[month];
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
		maxDays = 29;
	}
	if (d > maxDays) {
		throw invalid_argument("For given month there isn't such a day");
	}
	day = d;
}
