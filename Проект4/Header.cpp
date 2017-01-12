#include "Header.h"

enum etype { laborer, secretary, manager, accountant, executive, researcher };

employee::employee(): num(0), money(0) {}

employee::employee(int n, float m): num(n), money(m) {}

void employee::get()
{
	std::cin >> num >> money;
}

void employee::show() const
{
	std::cout << num << "  /  " << money << std::endl;
}

void date::getdate()
{
	char ch, temp[6];
	int i = 0;
	do
	{
		ch = _getche();
		if (ch != '/' && ch != '.' && ch != ':')
		{
			temp[i] = ch;
			i++;
		}
	} while (i != 6);

	day = (temp[0] - 48) * 10 + (temp[1] - 48);
	month = (temp[2] - 48) * 10 + (temp[3] - 48);
	year = (temp[4] - 48) * 10 + (temp[5] - 48);
}

void date::showdate() const
{
	std::cout << day << '/' << month << '/' << year << std::endl;
}