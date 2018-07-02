
#include<iostream>
#include<cstdlib>
#include<string.h>
#define DIM 30
using namespace std;

#include "Student.h"

//import methods from .h

int main(){
	class Student student1("Schmitt", "Karl", 123456); // constructor with parameters is called
	class Student student2; //here default constructor would be called

	student1.eingabe();
	student1.ausgabe();

	student2.ausgabe();

system("pause");
return 0;
}

void Student::ausgabe(){
		cout << mat_nr << "-" << vorname << " " << name << endl;
	}

void Student::eingabe(){
		cout << "Name		> ";
		cin.getline(name, DIM);
		cout << "Vorname		> ";
		cin.getline(vorname, DIM);
		cout << "Matrikelnummer		> ";
		cin>> mat_nr ;
	}
