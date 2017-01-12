#pragma once

#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <conio.h>

enum etype;

class employee
{
private:
	int num;
	float money;
	etype work;
	date DD;
public:
	employee();
	employee(int n, float m);
	void get();
	void show() const;
};

class date
{
private:
	int day, month, year;
public:
	void getdate();
	void showdate() const;
};

#endif // !_HEADER_H_
