#include <iostream>
#include <cstdlib>
#include <string>
#define DIM 20
using namespace std;

class Student{
	private:
		char *name, *vorname; //dynamische Attribute
		int mat_nr; //nicht dynamisch
	public:
		Student(){};						//STANDARDKONSTRUKTOR
		Student(char n[20], char vn[20], int m){		//KONSTRUKTOR
			name = new char[DIM];				// Speicher der Größe 2 Byte * 20 wird reserviert
			vorname = new char[DIM];
			strcpy_s(name,DIM-1,n);				// strcpy_s(ZIEL, ANZAHL ELEMENTE DIE KOPIERT WERDEN SOLLEN -1, QUELLE)
			strcpy_s(vorname, DIM-1, vn);
			mat_nr = m;
			};
		~Student(){//DESTRUKTOR
			cout << "Ein Objekt wird nicht benötigt und der SB wird freigegeben"<<endl;
			delete [] name; 				// Speicher der Größe 2*20 Bytes wird freigegeben
			delete [] vorname;				// Speicher der Größe 2*20 Bytes wird freigegeben
		};
		void output();
		void eingabe();
	};

int main(){
	{cout << "-----------Block A------------" << endl;
	class Student s1("Alemu", "Wondmu", 12345);
	s1.output();
	cout << "Ich bin am Verlassen des Blocks A" << endl;	
	}
	class Student s("A", "B", 567);
	s.eingabe();
	s.output();

system("pause");
}

void Student::output(){
	cout << vorname << " " << name << " " << mat_nr << endl;
}
void Student::eingabe(){
	cout << "Name:       >";
	cin.getline(name, 20);
	cout << "Vorname:       >";
	cin.getline(vorname, 20);
	cout << "Matrikelnummer:      >";
	cin >> mat_nr;
}
