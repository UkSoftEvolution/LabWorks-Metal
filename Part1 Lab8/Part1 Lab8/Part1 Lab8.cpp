#include "pch.h"
#include "conio.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int N = rand() % 15; //Количество строк и столбцов

	//Создание двумерного динамического массива
	int **F = new int*[N];
	for (int i = 0; i < N; i++)
		F[i] = new int[N];

	//Инициализации начальных данных динамического двумерного массива
	for (int i = 0; i < N; i++)
		for (int y = 0; y < N; y++)
			F[i][y] = rand() % 15 - 5;

	//Вывод двумерного динамического массива на экран
	cout << "Динамический двумерный массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < N; y++)
			cout << F[i][y] << " ";
		cout << endl;
	}

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (F[i][i] > 0)
		{
			for (int y = 0; y < N; y++)
				sum += F[y][i];
		}
		else
			continue;
	}
	cout << "Сумма столбцов с положительными елементами на главной диагонали: " << sum;

	//Удаление двумерного динамического массива
	for (int i = 0; i < N; i++)
		delete[]F[i];

	_getch();
}