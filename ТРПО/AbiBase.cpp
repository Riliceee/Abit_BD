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
char af;
void AbiBase()
{
	SetConsoleCP(1251); // ������� ��� ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ������� ��� ��������� ������� �������� win-cp 1251 � ����� ������

	setlocale(LC_ALL, "Russian");
	char af = 0;
	cout << "���������� ��������\n" << endl;
	cout << "1.���������� �����������\n"
		<< "2.�������� �����������\n"
		<< "3.����� ������ �����������\n"
		<< "4.����� �������\n"
		<< "5.�����\n" << endl;
	cout << ">> "; cin >> af;

	switch (af)
	{


	case '2':
	{
		cout << "��������" << endl;
		{

			string afa = "table.txt";
			ofstream of;
			of.open(afa);
			if (!of.is_open())
			{
				cout << "    " << endl;

			}
			else
				of << " ";

			/*ifstream file_in;

			file_in.open("table.txt");*/


			/*cout << "������� ����� ������ ��� �������� :" << endl;
			int i_number_line_delete = 0, inld = 0, inumd = 0, inlid = 0, inuld = 0,im=0,innf=3;
			cin >> i_number_line_delete;

			int i_number_line_now = 0;
			string linee;
			string line_file_text;

			im = i_number_line_delete;
			while (getline(file_in, linee))
			{
				if (!(i_number_line_delete == 2))
				{
					i_number_line_delete = 2 * 3;
					cout << i_number_line_delete;
				}
				for (innf=3;i_number_line_delete == innf;innf++)
				{
					i_number_line_delete = 0;
					i_number_line_delete = im * 3 + 2;
					cout << i_number_line_delete;
				}
				i_number_line_now++;
				if (!(i_number_line_now == i_number_line_delete))
				{
					line_file_text.insert(line_file_text.size(), linee);
					line_file_text.insert(line_file_text.size(), "\r\n");
					i_number_line_now == i_number_line_delete + 1;
					line_file_text.insert(line_file_text.size(), linee);
					line_file_text.insert(line_file_text.size(), "\r\n");
				}

			}
			file_in.close();
			ofstream file_out;
			file_out.open("table.txt", ios::trunc | ios::binary);
			file_out.write(line_file_text.c_str(), line_file_text.size());
			file_out.clear();
		}*/
			break;
		}

	case '3':
	{
		cout << "����� �����������" << endl;
		string lin, lll, iii, nnn, lii;
		string ne;
		bool founded = false;
		int lne = 0, lnn = 0, inln = 0;
		ifstream ifs("table.txt");
		cout << "������� ��� �����������, �������� ������� �����:" << endl;
		cin >> ne;
		cout << "������(�):" << endl;
		cout << "ID# " << setw(m + 2) << left << "��� �����������"
			<< endl;

		while (getline(ifs, lin))
		{//<< lnl << endl
			getline(ifs, lll);
			getline(ifs, lll);
			getline(ifs, lll);
			getline(ifs, lll);
			lne++;

			//cout << lnl<< endl;
			while (lin.find(ne) != string::npos) {
				//for (int lnl = lne + 5; lnl == lne; cout << lne) { cout << lnl; }
				cout << endl << lne << "  " << lin;
				founded = true;
				break;

			}
		}
		cout << endl;
		if (!founded)

			cout << "���������� �� ������." << endl;

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

	case '4':
	{
		cout << "����� �������" << endl;
		AbiBaseView();

		break;
	}

	case '5':
	{
		cout << "�����" << endl;
		break;
	}


	case '1':
	{
		cout << "����������:" << endl;
		char af;
		while (af = '0')
		{
			SetConsoleCP(1251); // ������� ��� ��������� ������� �������� win-cp 1251 � ����� �����
			SetConsoleOutputCP(1251); // ������� ��� ��������� ������� �������� win-cp 1251 � ����� ������
			setlocale(LC_ALL, "rus");
			string f;
			float ff;

			ofstream d("table.txt", ios_base::app);
			cout << "������� ���:" << endl;
			cin >> f;
			d << f;
			cout << "������� ��� � ��������:";
			cin >> f;
			d << " " << f;
			system("cls");
			cout << "������� ��������:";
			cin >> f;
			d << " " << f << endl;
			system("cls");
			cout << "������� ���� �������� � �������:��/��/��:" << endl;
			cin >> f;
			d << f << endl;
			system("cls");
			cout << "������� ������� ���� ���������, �������� �� �������:" << endl;
			cin >> ff;
			d << ff << endl;
			system("cls");
			cout << "������� ��� � �������� �������������:" << endl;
			cin >> f;
			d << f << endl;
			cout << "������� �������� �������������:" << endl;
			getline(cin, f);
			d << f << endl;
			system("cls");
			cout << endl;
			d.close();
			break;
		}
		break;
	}

	default:
		cout << "����������� ������!" << endl;
		break;
	}
	}
}