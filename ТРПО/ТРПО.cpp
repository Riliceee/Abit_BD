#include <iostream>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
#include "AbiBase.h"
#include "AbiBaseView.h"
#include "SpecBase.h"
#include "RepareBase.h"
#include <string>
using namespace std;
int menu()
{
	setlocale(LC_ALL, "Russian");
	int h;
	cout << "МЕНЮ\n" << endl;
	cout << "1. Работа со списками абитуриентов\n"
		<< "2. Вывести список специальностей\n"
		<< "3. Вывести список заявок на ремонт оборудования в учебном заведении\n"
		<< "4. Закрыть Программу\n" << endl;
	cout << ">> ";
	cin >> h; 
	return h;
}

int main()
{
	int h = 0;
	while (h != 9)
	{
		int h = menu();
		switch (h)
		{
		case 1:
			
			AbiBase();
			break;
		case 2:
			cout << "Список специальностей" << endl;
			SpecBase();
			break;
		case 3:
			cout << "Заявки на ремонт оборудования в учебном заведении" << endl;
			RepareBase();
			break;
		case 4:
			cout << "Завершение программы." << endl;
			return 0;
			break;



		}
		system("pause");
		system("cls");
	}
	return 0;
}
