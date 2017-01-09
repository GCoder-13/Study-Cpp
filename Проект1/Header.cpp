#include <iostream>
#include "Header.h"

tollBooth::tollBooth(): CarCount(0), money(0) {}

void tollBooth::payingCar()
{
	CarCount++;
	money += 0.50;
}

void tollBooth::nopayCar()
{
	CarCount++;
	std::cout << "\a";
}

void tollBooth::display() const
{
	std::cout << "\t Count car: " << CarCount << std::endl
			<< "\t Money: " << money << std::endl;
}