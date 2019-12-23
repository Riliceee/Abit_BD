#include "SpecBase.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "SpecOut.h"

using namespace std;
void SpecBase()
{
	setlocale(LC_ALL, "Russian");
	char a = 0;
	cout << "Управление услугами\n" << endl;
	cout << "1.Добавление Специальности\n"
		<< "2.Удаление Специальности\n"
		<< "3.Вывести таблицу Специальностей\n"
		<< "4.Выход\n" << endl;

	cout << ">> ";
	cin >> a;
	switch (a)
	{
	case '2':
		cout << "Удаление Специальности:" << endl;
		{
			ifstream file_in;

			file_in.open("tablespec.txt");
			cout << "Введите ID Специальности для удаления :" << endl;
			int i_number_line_delete = 0;
			cin >> i_number_line_delete;
			int i_number_line_now = 0;
			string linee;
			string line_file_text;


			while (getline(file_in, linee))
			{
				i_number_line_now++;
				if (!(i_number_line_now == i_number_line_delete))
				{
					line_file_text.insert(line_file_text.size(), linee);
					line_file_text.insert(line_file_text.size(), "\r\n");
				}
			}
			file_in.close();
			ofstream file_out;
			file_out.open("tablespec.txt", ios::trunc | ios::binary);
			file_out.write(line_file_text.c_str(), line_file_text.size());
			file_out.clear();
		    }
			break;
		
	case '1':
		cout << "Добавление Специальности:" << endl;
		char af;
		while (af = '0')
		{
			SetConsoleCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток ввода
			SetConsoleOutputCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток вывода
			setlocale(LC_ALL, "rus");
			string f;
			float ff;

			ofstream d("tablespec.txt", ios_base::app);
			cout << "Введите Код и Название Специальности:" << endl;
			cin >> f;
			d << f;
			cout << "Введите Название Специальности:" << endl;
			getline(cin, f);
			d << f << endl;
			system("cls");
			cout << endl;
			d.close();
			break;
		}

	case '3':
		cout << "Вывод таблицы" << endl;
		SpecOut();
		break;
	case '4':
		cout << "Выход" << endl;
		break;
		
	default:
		cout << "Неизвестный символ!" << endl;
		break;
	}

}