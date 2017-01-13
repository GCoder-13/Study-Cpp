#pragma once

#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <string>

class employee
{
private:
	std::string name;
	long num;
public:
	employee();
	employee(std::string, long);
	void getdata();
	void putdata() const;
};

#endif // !_HEADER_H_
