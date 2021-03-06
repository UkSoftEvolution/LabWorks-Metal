#include "pch.h"
#include "conio.h"
#include "cmath"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double a, b, Z;

	cout << "Задание 1 - a=1.1, b=4.7:" << endl;
	a = 1.1;
	b = 4.7;
	double x = b + exp(1.2 + a);
	double y = x * sin(a);

	if (y > 1)
		Z = sqrt(x) * cos(a);
	else
		Z = y + a * log(x);
	cout << "\tx=" << x << "; y=" << y << "; Z=" << Z << endl;

	cout << "Задание 1 - a=4.5, b=8.3:" << endl;
	a = 4.5;
	b = 8.3;
	x = b + exp(1.2 + a);
	y = x * sin(a);

	if (y > 1)
		Z = sqrt(x) * cos(a);
	else
		Z = y + a * log(x);
	cout << "\tx=" << x << "; y=" << y << "; Z=" << Z << endl;

	cout << endl << "Задание 2 - a=1.1, b=8.3: ";
	a = 1.1;
	b = 8.3;

	if (a > b)
		cout << a * b + 21;
	else
	{
		if (a == b)
			cout << "-5";
		else
			cout << 3 * a / b + 1;
	}

	_getch();
}