#include "pch.h"
#include "conio.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	typedef struct
	{
		char fio[32]; //ФИО студента
		char title[15]; //Название общежития
		int room; //Номер комнаты
	}hostel;

	const int z = 10;

	hostel hos[z] =
	{
		{"Родионов Гордей Сергеевич", "Общежитие №2", 446},
		{"Жданова Каторина Львовна", "Общежитие №1", 27},
		{"Максимов Ипполит Ильяович", "Общежитие №3", 298},
		{"Мельников Наум Ростиславович", "Общежитие №1", 227},
		{"Константинова Дарья Витальевна", "Общежитие №2", 113},
		{"Калинина Элеонора Вениаминовна", "Общежитие №3", 407},
		{"Гришина Людмила Игнатьевна", "Общежитие №2", 234},
		{"Романова Ванесса Аркадьевна", "Общежитие №3", 280},
		{"Шубин Мартын Яковович", "Общежитие №3", 363},
		{"Харитонова Оксана Васильевна", "Общежитие №4", 483}
	};

	/*for (int i = 0; i < 10; i++)
		cout << hos[i].fio << ", " << hos[i].title << ", " << hos[i].room << endl;*/

	//Вывод списка студентов по всем общежитиям
	string str = "";
	for (int i = 0; i < z; i++)
	{
		if (str.find(hos[i].title) == string::npos)
		{
			str += string(hos[i].title);
			cout << "Список студентов проживающих в общежитии: " << hos[i].title << endl;

			for (int y = i; y < z; y++)
			{
				if (strcmp(hos[i].title, hos[y].title) == 0)
					cout << "\t" << hos[y].fio << endl;
				else
					continue;
			}
		}
		else
			continue;
		cout << endl;
	}

	//Вывод количества студентов по каждому общежитию
	str = "";
	for (int i = 0; i < z; i++)
	{
		if (str.find(hos[i].title) == string::npos)
		{
			str += string(hos[i].title);
			cout << "Количество студентов в общежитии '" << hos[i].title << "':";

			int x = 0;
			for (int y = i; y < z; y++)
			{
				if (strcmp(hos[i].title, hos[y].title) == 0)
					x++;
				else
					continue;
			}
			cout << x << endl;
		}
		else
			continue;
	}

	_getch();
}