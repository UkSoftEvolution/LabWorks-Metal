#include "pch.h"
#include "conio.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char str[] = "if(ww=72){l--; if(l<1) l=4;}";

	cout << "Начальная строка: " << str << endl;

	int index = (strrchr(str, 'w') - str);
	memmove(str + index, str + index + 1, index);
	cout << "Модифицированая строка с удалённым символом 'w': " << str << endl;

	index = (strchr(str, '=') - str);
	memmove(str + index + 1, str + index, index);
	cout << "Модифицированая строка с изменением с 'w=72' на 'w==72': " << str << endl;

	cout << "Разбиение строки по разделителю ';':" << endl;
	char *next = NULL;
	char* str2 = strtok_s(str, ";", &next);
	while (str2 != NULL)
	{
		cout << "\t" << str2 << endl;
		str2 = strtok_s(NULL, ";", &next);
	}

	_getch();
}