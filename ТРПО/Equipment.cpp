#include <iostream>
#include "Equipment.h"

int Repair()
{
	using namespace std;

	setlocale(LC_ALL, "Rus");

	char p;
	cout << "- 1 - Добавить ... в базу данных. " << endl;
	cout << "- 2 - Просмотреть ... в базе данных. " << endl;
	cout << "- 3 - Удалить ... из базы данных. " << endl;
	cout << "- 4 - Редактировать базу данных. " << endl;
	cout << "- # - Выход из программы. " << endl;
	cout << endl;
	cout << "- $ - Возврат в основное меню." << endl;
	cout << endl;
	cout << ">>> ";
	cin >> p;
	system("cls");

	switch (p)
	{
	case ('1'):
		//
		break;
	case ('2'):
		//
		break;
	case ('3'):
		//
		break;
	case ('4'):
		//
		break;
	case '#':
		exit(0);
		break;
	case '$':
		return 0;
		break;

	default:
		cout << "Неизвестный символ!" << endl;
		break;
	}
	cout << endl;
}