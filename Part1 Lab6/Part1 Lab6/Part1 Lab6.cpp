#include "pch.h"
#include "conio.h"
#include "cmath"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double b = 4.7, aN = 1.1, aK = 4.5, da = 0.4;

	cout << "Задание a, шаг 0.4:" << endl;
	for (double a = aN; a <= aK; a += da)
	{
		double x = b + exp(1.2 + a);
		double y = x * sin(a);
		double Z;

		if (y > 1)
			Z = sqrt(x) * cos(a);
		else
			Z = y + a * log(x);

		cout << "\ta=" << a << "; x=" << x << "; y=" << y << "; Z=" << Z << endl;
	}

	cout << endl << "Задание b, вычислить в 11 точках:" << endl;
	da = (aK - aN) / (11 - 1);
	for (double a = aN; a <= aK; a += da)
	{
		double x = b + exp(1.2 + a);
		double y = x * sin(a);
		double Z;

		if (y > 1)
			Z = sqrt(x) * cos(a);
		else
			Z = y + a * log(x);

		cout << "\ta=" << a << "; x=" << x << "; y=" << y << "; Z=" << Z << endl;
	}

	_getch();
}