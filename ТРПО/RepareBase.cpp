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
	cout << "���������� ��������\n" << endl;
	cout << "1.��������\n"
		<< "2.�������\n"
		<< "3.��������������\n"
		<< "4.�����\n" << endl;


	cout << ">> ";
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "��������" << endl;

		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "��������������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	}

}
