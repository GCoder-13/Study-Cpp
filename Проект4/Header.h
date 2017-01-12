#pragma once

#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <conio.h>

enum etype;
void getWork(etype& w);
void showWork(const etype w);

class date
{
private:
	int day, month, year;
public:
	date();
	date(int d, int m, int y);
	void getdate();
	void showdate() const;
};

class employee
{
private:
	int num;
	float money;
	date DD;
	etype work;
public:
	employee();
	employee(int n, float m, date d, etype w);
	void getEmploy();
	void putEmploy() const;
};

#endif // !_HEADER_H_
