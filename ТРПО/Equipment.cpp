#include <iostream>
#include "Equipment.h"

int Repair()
{
	using namespace std;

	setlocale(LC_ALL, "Rus");

	char p;
	cout << "- 1 - �������� ... � ���� ������. " << endl;
	cout << "- 2 - ����������� ... � ���� ������. " << endl;
	cout << "- 3 - ������� ... �� ���� ������. " << endl;
	cout << "- 4 - ������������� ���� ������. " << endl;
	cout << "- # - ����� �� ���������. " << endl;
	cout << endl;
	cout << "- $ - ������� � �������� ����." << endl;
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
		cout << "����������� ������!" << endl;
		break;
	}
	cout << endl;
}