#include <iostream>

using namespace std;

class Array
{
	private:
		int **p;
		int n, m;
	public:
		Array(int pn, int pm);
		Array(const Array& zm);
		void Input();
		void Output() const;
		friend Array operator+(const int a, const Array& Arr);
		Array& operator=(const Array&);
		~Array();
};

Array::Array(int pn, int pm): n(pn), m(pm), p(0)
{
	p = new int*[n];
	for(int i(0); i<n; i++)
		p[i] = new int[m];
}

Array::Array(const Array& zm)
{
	n = zm.n;
	m = zm.m;
	p = new int*[n];
	for (int i(0); i<n; i++)
		p[i] = new int[m];
	for (int i(0); i<n; i++)
		for (int j(0); j < m; j++)
			p[i][j] = zm.p[i][j];
}

Array::~Array()
{
	for (int i(0); i < n; i++)
		delete[] p[i];
	delete[] p;
}

void Array::Input()
{
	for (int i(0); i<n; i++)
		for (int j(0); j < m; j++)
		{
			cout << "Enter element [" << i << ";" << j << "]: ";
			cin >> p[i][j];
		}
}

void Array::Output() const
{
	for (int i(0); i < n; i++)
	{
		for (int j(0); j < m; j++)
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
}

Array operator+(const int a, const Array& Arr)
{
	Array temp(Arr.n, Arr.m);
	for(int i(0); i<Arr.n; i++)
		for (int j(0); j < Arr.m; j++)
		{
			temp.p[i][j] = a + Arr.p[i][j];
		}
	return temp;
}

Array& Array::operator=(const Array& pt)
{
	if (this == &pt)
		return *this;
	n = pt.n;
	m = pt.m;
	for (int i(0); i < n; i++)
		for (int j(0); j < m; j++)
			p[i][j] = pt.p[i][j];
	return *this;
}

int main()
{
	system("color f0");
	int n, m;
	cout << "Vvedit rozmir matrici Arr[n; m]: ";
	cin >> n >> m;
	Array A(n, m), B(n, m);
	cout << "\t Vvedit elementi manrici:" << endl;
	A.Input();

	int a;
	cout << "Vvedit chislo: ";
	cin >> a;

	B = a + A;

	B.Output();
	cout << endl;

	system("pause");
	return 0;
}