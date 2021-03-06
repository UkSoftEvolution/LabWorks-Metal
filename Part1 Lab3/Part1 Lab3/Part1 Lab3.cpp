#include "pch.h"
#include "conio.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double a = 8, b = 3, c = 2, d = 1;
	const double P = 3.14;

	cout << "Вычисление площади двумерной фигуры: ";
	cout << "Фигура делится на полукруг, трапецию, перевёрнутую трапецию и круг." << endl;

	double Se = (P * b * 2) / 2; //Площадь полукруга
	double St = ((a + (a + b * 2))* b) / 2; //Площадь трапеции
	double Sit = ((a + (a + b * 2))* c) / 2; //Площадь перевёрнутой трапеции
	double Sc = P / 4 * pow(d, 2); //Площадь круга

	cout << endl << "Площадь полукруга: " << Se << " см2" << endl;
	cout << "Площадь трапеции: " << St << " см2" << endl;
	cout << "Площадь перевёрнутой трапеции: " << Sit << " см2" << endl;
	cout << "Площадь круга: " << Sc << " см2" << endl;

	cout << endl << "Площадь фигуры: " << Se + St + Sit + Sc << " см2";

	_getch();
}