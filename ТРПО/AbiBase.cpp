#define _CRT_SECURE_NO_WARNINGS
#include "AbiBase.h"
#include "AbiBaseView.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <iomanip>
using namespace std;

string b,a,la,o,naz,ga,ja,stra,str;
int  line = 0; int m = 0,  kk = 0, i, ii;
void AbiBase()
{
	SetConsoleCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток вывода

	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Управление услугами\n" << endl;
	cout << "1.Добавление Абитуриента\n"
		<< "2.Удаление Абитуриента\n"
		<< "3.Поиск строки Абитуриента\n"
		<< "4.Вывод таблицы\n"
		<< "5.Выход\n" << endl;
	cout << ">> "; cin >> a;

	switch (a)
	{
		
	case 1:
	{
		cout << "Добавление:" << endl;
		char a;
		while (a = '0')
		{
			SetConsoleCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток ввода
			SetConsoleOutputCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток вывода
			setlocale(LC_ALL, "rus");
			string f;
			float ff;

			ofstream d("table.txt", ios_base::app);
			cout << "Введите ФИО:" << endl;
			cin >> f;
			d << f;
			cout << "Введите Имя и Отчество:";
			cin >> f;
			d << " " << f;
			system("cls");
			cout << "Введите Отчество:";
			cin >> f;
			d << " " << f << endl;
			system("cls");
			d.close();
			ofstream r("datr.txt", ios_base::app);
			cout << "Введите дату рождения в формате:дд/мм/гг:" << endl;
			cin >> f;
			r << f << endl;
			system("cls");
			r.close();
			ofstream s("srball.txt", ios_base::app);
			cout << "Введите средний балл аттестата, округляя до десятых:" << endl;
			cin >> ff;
			s << ff << endl;
			system("cls");
			s.close();
			ofstream ko("kod.txt", ios_base::app);
			cout << "Введите Код и Название Специальности:" << endl;
			cin >> f;
			ko << f << endl;
			ko.close();
			ofstream na("naz.txt", ios_base::app);
			cout << "Введите Название Специальности:" << endl;
			getline(cin, f);
			na << f << endl;
			na.close();
			system("cls");
			cout << endl;

			break;
		}
		break;
	}

	case 2:
	{
		cout << "Удаление" << endl;
		{
			ifstream file_in;
			ifstream fil;
			ifstream ilf;
			ifstream fiile;
			ifstream fille;
			file_in.open("table.txt");
			fil.open("datr.txt");
			ilf.open("srball.txt");
			fiile.open("kod.txt");
			fille.open("naz.txt");
			cout << "Введите номер строки для удаления :" << endl;
			int i_number_line_delete = 0, inld = 0, inumd = 0, inlid = 0, inuld = 0;
			cin >> i_number_line_delete;
			inld = i_number_line_delete;
			inumd = i_number_line_delete;
			inlid = i_number_line_delete;
			inuld = i_number_line_delete;
			int i_number_line_now = 0, inln = 0, inuml = 0, inlin = 0, inuln = 0;
			string linee, lne, nline, dline, n_line;
			string line_file_text, lft, line_f, line_fi, line_fie;
			
		
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
			file_out.open("table.txt", ios::trunc | ios::binary);
			file_out.write(line_file_text.c_str(), line_file_text.size());
			file_out.clear();

			//
			//while (getline(fil, lne))
			//{
			//	inln++;
			//	if (!(inln == inld))
			//	{
			//		lft.insert(lft.size(), lne);
			//		lft.insert(lft.size(), "\r\n");
			//	}
			//}
			//fil.close();
			//ofstream fil_out;
			//fil_out.open("datr.txt", ios::trunc | ios::binary);
			//fil_out.write(lft.c_str(), lft.size());
			//fil_out.clear();
			////

			//while (getline(ilf, nline))
			//{
			//	inuml++;
			//	if (!(inuml == inumd))
			//	{
			//		line_f.insert(line_f.size(), nline);
			//		line_f.insert(line_f.size(), "\r\n");
			//	}
			//}
			//ilf.close();
			//ofstream ilf_out;
			//ilf_out.open("srball.txt", ios::trunc | ios::binary);
			//ilf_out.write(line_f.c_str(), line_f.size());
			//ilf_out.clear();

			////
			//while (getline(fiile, dline))
			//{
			//	inlin++;
			//	if (!(inlin == inlid))
			//	{
			//		line_fi.insert(line_fi.size(), dline);
			//		line_fi.insert(line_fi.size(), "\r\n");
			//	}
			//}
			//fiile.close();
			//ofstream fiile_out;
			//fiile_out.open("kod.txt", ios::trunc | ios::binary);
			//fiile_out.write(line_fi.c_str(), line_fi.size());
			//fiile_out.clear();

		/*	while (getline(fille, n_line))
			{
				inuln++;
				if (!(inuln == inuld))
				{
					line_fie.insert(line_fie.size(), n_line);
					line_fie.insert(line_fie.size(), "\r\n");
				}
			}
			fille.close();
			ofstream fille_out;
			fille_out.open("naz.txt", ios::trunc | ios::binary);
			fille_out.write(line_fie.c_str(), line_fie.size());
			fille_out.clear();*/
		}
		break;
	}

	case 3:
	{
		cout << "Поиск Абитуриента" << endl;
		string lin, lll, iii, nnn, lii;
		string ne;
		bool founded = false;
		int lne = 0, lnn = 0, inln = 0;
		ifstream ifs("table.txt");
		cout << "Введите ФИО Абитуриента, которого желаете найти:" << endl;
		cin >> ne;
        cout << "Найден(ы):"<<endl;
		cout << "ID# " << setw(m + 2) << left << "ФИО Абитуриента"
			 << endl;
		
		while (getline(ifs, lin))
		{//<< lnl << endl
			getline(ifs,lll);
			getline(ifs, lll);
			getline(ifs, lll);
			getline(ifs, lll);
			lne++;
			
				//cout << lnl<< endl;
			while (lin.find(ne) != string::npos){
			//for (int lnl = lne + 5; lnl == lne; cout << lne) { cout << lnl; }
				cout << endl << lne << "  " << lin;
				founded = true;
				break;

			}
		}
		cout << endl;
		if (!founded)
			
			cout << "Абитуриент не найден." << endl;

		/*while (getline(afs, lll))
		{
			inln++;
			if (!(inln == lne))
			{
				lii.insert(lii.size(), lll);
				lii.insert(lii.size(), "\r\n");
				cout << lll <<" " << endl;
			}

		}
		cout << endl << endl;*/


		break;
	}

	case 4:
	{
		cout << "Вывод таблицы" << endl;
		AbiBaseView();
		
		break;
	}

	case 5:
	{
		cout << "Выход" << endl;
		break;
	}


	case 6:
	{
		cout << "Добавление:" << endl;
		char a;
		while (a = '0')
		{
			SetConsoleCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток ввода
			SetConsoleOutputCP(1251); // Команда для установки кодовой страницы win-cp 1251 в поток вывода
			setlocale(LC_ALL, "rus");
			string f;
			float ff;

			ofstream d("table.txt", ios_base::app);
			cout << "Введите ФИО:" << endl;
			cin >> f;
			d << f;
			cout << "Введите Имя и Отчество:";
			cin >> f;
			d << " " << f;
			system("cls");
			cout << "Введите Отчество:";
			cin >> f;
			d << " " << f << endl;
			system("cls");
			cout << "Введите дату рождения в формате:дд/мм/гг:" << endl;
			cin >> f;
			d << f << endl;
			system("cls");
			cout << "Введите средний балл аттестата, округляя до десятых:" << endl;
			cin >> ff;
			d << ff << endl;
			system("cls");
			cout << "Введите Код и Название Специальности:" << endl;
			cin >> f;
			d << f << endl;
			cout << "Введите Название Специальности:" << endl;
			getline(cin, f);
			d << f << endl;
			system("cls");
			cout << endl;
            d.close();
			break;
		}
		break;
	}
	}
}