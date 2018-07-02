#include<iostream>
#include<cstdlib>
#include<string.h>

#define DIM 30
using namespace std;

class Student{
	private:
		char* vorname;	//weil man jetzt nicht weiﬂ, wie lang der Name ist, muss Speicherplatz w‰hrend RT flexibel sein!
		char* name;
		int mat_nr;
	public:
		Student (char n[], char vn[], int mn){
			int l_n = strlen(n);			//String Length
			int l_vn = strlen(vn);
			vorname = new char[l_vn + 1];						//hier versieht der Konstruktor die private Variablen mit werten
			strcpy_s(name,l_n, n);					// strcpy(vorname, nachname)
			name = new char[l_n + 1];		//+1 weil strings haben am Ende immer \0 "Nullterminator"
			strcpy_s(vorname,l_vn, vn);
			mat_nr = mn;
			}
		Student(){
			vorname = new char[DIM];
			name = new char[DIM];
			mat_nr = 0;
			}

	void ausgabe();
	void eingabe();

};