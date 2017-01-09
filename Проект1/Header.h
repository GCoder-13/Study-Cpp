#pragma once

#ifndef _HEADER_H_
#define _HEADER_H_
	
class tollBooth
{
private:
	unsigned int CarCount;
	double money;
public:
	tollBooth();
	void payingCar();
	void nopayCar();
	void display() const;
};
	
#endif
