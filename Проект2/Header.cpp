#include "Header.h"

time::time(): hour(0), minute(0), second(0) {}

time::time(int h, int m, int s): hour(h), minute(m), second(s) {}

void time::display() const
{
	std::cout << hour << ":" << minute << ":" << second;
}

time time::operator+(time a)
{
	second += a.second;
	minute += a.minute;
	hour += a.hour;

	if (second >= 60)
	{
		second -= 60;
		minute++;
	}

	if (minute >= 60)
	{
		minute -= 60;
		hour++;
	}
	return *this;
}

std::istream & operator >> (std::istream & is, time & t)
{
	std::cin >> t.hour >> t.minute >> t.second;
	return is;
}

std::ostream & operator<<(std::ostream & os, time & t)
{
	std::cout << t.hour << ":" << t.minute << ":" << t.second;
	return os;
}
