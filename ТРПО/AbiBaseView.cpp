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
int  v = 1, n = 1, k, lk, kj, jm, l, ll, gk, gm;
char s = 100;
 int vsse = 0,vssse=0;

 void AbiBaseView()
 {int inn=0;
	 string b, a, la, o, naz, ga, ja, stra;
	 int  v = 1; char n = 1; int vse;
	 int TotalLength = 0, line = 1; int m = 0, mm = 0, kk = 0, i, ii, h;
	 string str, strr, strl, strj;
	 ifstream file("table.txt");
	 ifstream fi("table.txt");
	 FILE* fdf;
	 fdf = fopen("table.txt", "r");
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
		 line = line + 5;i = m - str.size();
	 }

	 cout << "ID# " << setw(m + 2) << left << "ФИО Абитуриента"
		 << setw(15) << "Дата Рождения"
		 << setw(10) << "Ср.Балл"
		 << setw(20) << "Код специальности"
		 << setw(40) << "Название специальности"
		 << endl; 
	 while (!fi.eof())
	 {
		 
		 cout << " " << v++ << "  ";
		 
			 getline(fi, str);
			 cout << str << " "; i = (m - str.size() + 2); for (ii = 0; ii < i; ii++)cout << " ";
			 getline(fi, str);
			 cout << str << "      ";
			 getline(fi, str);
			 cout << str << "      ";
			 getline(fi, str);
			 cout << str << "           ";
			 getline(fi, str);
			 cout << str << endl;

	 }
	 file.close();	 
 }