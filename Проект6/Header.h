#pragma once

#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <string>

#define PAUSE system("pause")

std::string Transform(std::string str);

class employee
{
private:
	std::string name;
	unsigned long num;
public:
	employee();
	employee(std::string, long);
	void getdata();
	void putdata() const
	{
		std::cout << num << "  /  " << Transform(name);
	}
};

#endif // !_HEADER_H_
