#define _CRT_SECURE_NO_WARNINGS
#include "AbiBaseView.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <iomanip>

using namespace std;
int  v = 1, n = 1, k, lk, kj, jm, l, ll, gk, gm;
char s = 100;
 int vsse = 0,vssse=0;

 void AbiBaseView()
 {int inn=0;
	 string b, a, la, o, naz, ga, ja, stra;
	 int  v = 1; char n = 1; int vse;
	 int TotalLength = 0, line = 1; int m = 0, mm = 0, kk = 0, i, ii, hh, h, gg, g, jj, j;
	 string str, strr, strl, strj;
	 ifstream file("table.txt");
	 //ifstream filel("dadr.txt");
	 //ifstream ffd("srball.txt");
	 //ifstream fdd("kod.txt");
	 ifstream fi("table.txt");
	 //ifstream ro("datr.txt");
	 //ifstream s("srball.txt");
	 //ifstream ko("kod.txt");
	 //ifstream na("naz.txt");
	 FILE* f;
	 f = fopen("table.txt", "r");
	 int linf = 0;
	 do {
		 while ((getc(f) != '\n') && (!feof(f)))
			 kk++;
		 if (kk > m)m = kk;
		 kk = 0;
	 } while (!feof(f));
	 vse = 0;
	 while (getline(file, str))
	 {
		 line = line + 5;i = m - str.size();
	 }
	 
	 //FILE* ff;
	 //ff = fopen("datr.txt", "r");
	 //do {
		// while ((getc(ff) != '\n') && (!feof(ff)))k++;
		// if (k > mm)mm = k; k = 0;
	 //} while (!feof(ff));
	 //while (getline(file, a))
	 //{
		// line++; h = mm - a.size();
	 //}

	 //FILE* fd;
	 //fd = fopen("table.txt", "r");
	 //do {
		// while ((getc(fd) != '\n') && (!feof(fd)))kk++;
		// if (ll > l)l = ll; ll = 0;
	 //} while (!feof(f));
	 //while (getline(file, la))
	 //{
		// line++; j = l - la.size();
	 //}

	 //FILE* fdf;
	 //fdf = fopen("kod.txt", "r");
	 //do {
		// while ((getc(fdf) != '\n') && (!feof(fdf)))kk++;
		// if (gk > gm)gm = gk; gk = 0;
	 //} while (!feof(fdf));
	 //while (getline(file, o))
	 //{
		// line++; g = gm - o.size();
	 //}

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
			 cout << str << "      ";// h = (mm - str.size() + 5); for (hh = 0; hh < h; hh++)cout << " ";
			 getline(fi, str);
			 cout << str << "      ";// j = (l - str.size() + 10); for (jj = 0; jj < j; jj++)cout << " ";
			 getline(fi, str);
			 cout << str << "           ";// g = ((gm - str.size()) + 18); for (gg = 0; gg < g; gg++)cout << " ";
			 getline(fi, str);
			 cout << str << endl;

	 }

	 
	 
	 
	 // while (!fi.eof())
	// {
		
	//	 getline(fi, str);
	//	 cout << str; i = (m - str.size() + 2); for (ii = 0; ii < i; ii++)cout << " ";
	//	cout << " " << v++ << " ";
		 //getline(ro, a);
		// cout << a; h = (mm - a.size() + 5); for (hh = 0; hh < h; hh++)cout << " ";
		// getline(s, la);
		// cout << la;  j = (l - la.size() + 10); for (jj = 0; jj < j; jj++)cout << " ";
		// getline(ko, o);
		 //cout << o; g = (gm - o.size() + 19); for (gg = 0; gg < g; gg++)cout << " ";
		// getline(na, naz);
		// cout << naz << endl;
	// }
	 file.close();
	// ro.close();
	// s.close();
	// ko.close();
	// na.close();
	
			
		 
 }