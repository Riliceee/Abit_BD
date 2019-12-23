#define _CRT_SECURE_NO_WARNINGS
#include "AbiBaseView.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


void SpecOut()
{int  k, lk, kj, jm, l, ll, gk, gm;
char s = 100;
int vsse = 0, vssse = 0;
	int inn = 0;
	string b, a, la, o, naz, ga, ja, stra;
	int  v = 1; char n = 1; int vse;
	int TotalLength = 0, line = 1; int m = 0, mm = 0, kk = 0, i, ii, hh, h, gg, g, jj, j;
	string str, strr, strl, strj;
	ifstream file("tablespec.txt");
	ifstream fi("tablespec.txt");
	FILE* fdf;
	fdf = fopen("tablespec.txt", "r");
	int linf = 0;
	do {
		while ((getc(fdf) != '\n') && (!feof(fdf)))
			kk++;
		if (kk > m)m = kk;
		kk = 0;
	} while (!feof(fdf));
	vse = 0;
	while (getline(file, str))
	{
		line = line + 5; i = m - str.size();
	}

	cout << "ID# " << setw(m+ 2) << left << "Код и Название Специальности"

		<< endl;
	while (!fi.eof())
	{

		cout << " " << v++ << "  ";

		getline(fi, str);
		cout << str << " "; cout << endl; i = (m - str.size() + 2); for (ii = 0; ii < i; ii++);
		

	}
	file.close();
}