#include "RepareBase.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;
void RepareBase()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Управление услугами\n" << endl;
	cout << "1.Удаление\n"
		<< "2.Вставка\n"
		<< "3.Редактирование\n"
		<< "4.Выход\n" << endl;


	cout << ">> ";
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Удаление" << endl;

		break;
	case 2:
		cout << "Вставка" << endl;
		break;
	case 3:
		cout << "Редактирование" << endl;
		break;
	case 4:
		cout << "Выход" << endl;
		break;
	}

}
