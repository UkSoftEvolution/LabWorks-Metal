#include "pch.h"
#include "conio.h"
#include "cmath"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double a, b, Z;

	cout << "Задание a=1.1, b=4.7:" << endl;
	a = 1.1;
	b = 4.7;
	double x = b + exp(1.2 + a);
	double y = x * sin(a);

	if (y > 1)
		Z = sqrt(x) * cos(a);
	else
		Z = y + a * log(x);
	cout << "\tx=" << x << "; y=" << y << "; Z=" << Z << endl;

	cout << endl << "Задание a=4.5, b=8.3:" << endl;
	a = 4.5;
	b = 8.3;
	x = b + exp(1.2 + a);
	y = x * sin(a);

	if (y > 1)
		Z = sqrt(x) * cos(a);
	else
		Z = y + a * log(x);
	cout << "\tx=" << x << "; y=" << y << "; Z=" << Z;

	_getch();
}