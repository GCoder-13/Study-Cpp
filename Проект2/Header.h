#pragma once

#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class time
{
private:
	int hour, minute, second;
public:
	time();
	time(int h, int m, int s);
	void display() const;
	time operator+(time a);
	friend std::istream& operator>>(std::istream& is, time& t);
	friend std::ostream& operator<<(std::ostream& os, time& t);
};

#endif // !_HEADER_H_
