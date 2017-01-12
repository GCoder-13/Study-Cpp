#include <iostream>
#include <conio.h>

class date
{
private:
	int day, month, year;
public:
	void getdate();
	void showdate() const;
};

int main(int argc, char **argv)
{
	date a;

	a.getdate();
	std::cout << std::endl;
	a.showdate();

	system("pause");
	return NULL;
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
	} while (i!=6);

	day = (temp[0] - 48) * 10 + (temp[1] - 48);
	month = (temp[2] - 48) * 10 + (temp[3] - 48);
	year = (temp[4] - 48) * 10 + (temp[5] - 48);
}

void date::showdate() const
{
	std::cout << day << '/' << month << '/' << year << std::endl;
}