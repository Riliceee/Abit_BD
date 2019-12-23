#include <iostream> 
#include "Equipment.h"
#include "Repair.h"

void Work()
{
	using namespace std;
int  r = 0;
	setlocale(LC_ALL, "Rus");
cout << "- 1 - Заявки на ремонт." << endl;
		cout << "- 2 - Все оборудование." << endl;
		cout << "- # - Выход из программы." << endl;
		cout << endl;
		cout << ">>> ";
		cin >> r;
		system("cls");
	
		
		switch (r)
		{
		case 1:
			cout << "Добро пожаловать в меню <Заявки на ремонт> выберете интересующий вас пункт меню: " << endl;
			cout << endl;
			Equipment();
			break;
		case 2:
			cout << "Добро пожаловать в меню <Все оборудование> выберете интересующий вас пункт меню: " << endl;
			cout << endl;
			Repair();
			break;
		case '#':
			r = 123;
			return;
			break;

			default:
				cout << "Неизвестный символ!" << endl;
				break;
		}
		cout << endl;
	}
