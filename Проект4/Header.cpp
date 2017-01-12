#include "Header.h"

enum etype { laborer, secretary, manager, accountant, executive, researcher };

void getWork(etype& w)
{
	char ch = _getche();
	switch (ch)
	{
	case 'l':
		w = laborer;
		break;
	case 's':
		w = secretary;
		break;
	case 'm':
		w = manager;
		break;
	case 'a':
		w = accountant;
		break;
	case 'e':
		w = executive;
		break;
	case 'r':
		w = researcher;
		break;
	default:
		std::cout << std::endl << "\t Incorect enter!" << std::endl;
		system("pause");
		exit(0);
	}
}

void showWork(const etype w)
{
	switch (w)
	{
	case 0:
		std::cout << "laborer" << std::endl;
		break;
	case 1:
		std::cout << "secretary" << std::endl;
		break;
	case 2:
		std::cout << "manager" << std::endl;
		break;
	case 3:
		std::cout << "accountant" << std::endl;
		break;
	case 4:
		std::cout << "executive" << std::endl;
		break;
	case 5:
		std::cout << "researcher" << std::endl;
		break;
	}
}

employee::employee(): num(0), money(0) {}

employee::employee(int n, float m, date d, etype w): num(n), money(m), DD(d), work(w) {}

void employee::getEmploy()
{
	std::cout << "Enter number worker: ";
	std::cin >> num;

	std::cout << "Enter money worker: ";
	std::cin >> money;

	std::cout << "Enter date of employment: ";
	DD.getdate();

	std::cout << std::endl << "Enter type work(laborer, secretary, manager, accountant, executive, researcher): ";
	getWork(work);
	std::cout << std::endl;
}

void employee::putEmploy() const
{
	std::cout << "Number worker: " << num << std::endl;

	std::cout << "Money worker: " << money << std::endl;

	std::cout << "Date of employment: ";
	DD.showdate();

	std::cout << std::endl << "Type work: ";
	showWork(work);
}

date::date(): day(0), month(0), year(0) {}

date::date(int d, int m, int y): day(d), month(m), year(y) {}

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
	std::cout << day << '/' << month << '/' << year;
}