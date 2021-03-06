#include "pch.h"
#include "conio.h"
#include <iostream>

using namespace std;

void Initialization(int**, int); //Функция инициализации начальных данных динамического двумерного массива
void Print(int**, int); //Функция для вывода двумерного динамического массива на экран
void Change(int**, int); //Функция для замены последнего столбца, минимальным елементом главной диагонали

int main()
{
	setlocale(LC_ALL, "RUS");

	int N = rand() % 25; //Количество строк и столбцов

	//Создание двумерного динамического массива
	int **H = new int* [N];
	for (int i = 0; i < N; i++)
		H[i] = new int[N];

	Initialization(H, N);
	cout << "Динамический двумерный массив:" << endl;
	Print(H, N);
	Change(H, N);
	cout << endl << "Модифицированый динамический двумерный массив:" << endl;
	Print(H, N);

	//Удаление двумерного динамического массива
	for (int i = 0; i < N; i++)
		delete[]H[i];

	_getch();
}

void Initialization(int **H, int N)
{
	for (int i = 0; i < N; i++)
		for (int y = 0; y < N; y++)
			H[i][y] = rand() % 10;
}

void Print(int **H, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < N; y++)
			cout << H[i][y] << " ";
		cout << endl;
	}
}

void Change(int **H, int N)
{
	int min = H[0][0];
	for (int i = 1; i < N; i++)
	{
		if (min > H[i][i])
			min = H[i][i];
		else
			continue;
	}

	for (int i = 0; i < N; i++)
		H[i][N - 1] = min;
}