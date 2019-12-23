#include <iostream> 
#include "Repair.h"

int Equipment()
{
	using namespace std;

	setlocale(LC_ALL, "Rus");

	char x;
	cout << "- 1 - Добавить предметы в базу данных. " << endl;
	cout << "- 2 - Просмотреть предметы в базе данных. " << endl;
	cout << "- 3 - Удалить предмет из базы данных. " << endl;
	cout << "- 4 - Редактировать базу данных. " << endl;
	cout << "- # - Выход из программы. " << endl;
	cout << endl;
	cout << "- $ - Возврат в основное меню." << endl;
	cout << endl;
	cout << ">>> ";
	cin >> x;
	system("cls");

	switch (x)
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
		cout << "Неизвестный символ! Повторите ввод позднее, чао." << endl;
		break;
	}
	cout << endl;
}
