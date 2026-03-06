#ifndef DATE_H
#define DATE_H

#include <array>

extern const array<unsigned int, 13> daysInMonth;

struct Date {
	Date(unsigned int, unsigned int, unsigned int);
	unsigned int year : 14; // 0 - 16.383
	unsigned int month : 4; // 0 - 15
	unsigned int day : 5; //0 - 31
};

#endif 
