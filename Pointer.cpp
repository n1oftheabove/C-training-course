#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

// ROHE ZEIGER
	// in C++ eher vermeiden. In C++11: Neue "smart Pointer" verwenden, statt new und delete zu verwenden



int main(){

//Zeiger korrekt initialisieren	
int *ptr=0L;		// 0L ist der Nullpointer, in C++ auch nullptr
int ival = 123456;
// Zeiger referenzieren lassen
ptr = &ival;		// & ist Adressoperator, dh. Zeiger ptr bekommt die Adresse (nicht den Wert!) von ival zugewiesen.
					// dh. Zeiger ptr zeigt jetzt auf den Wert von ival

cout << "*ptr "<< *ptr <<endl;		//Wert von ival, 123456 
cout << "ptr " << ptr << endl;		//Adresse von ival
cout << "ival "<< ival <<endl;		// ival
cout << "&ival " << &ival << endl;	//Adresse von ival
cout << "&ptr " << &ptr << endl;	//Adresse des Pointers

*ptr = 0;

cout << ival <<endl;	// gibt 0 aus, da ptr auf Speicher von ival referenzierte und vorher mit *ptr=0 gelöscht wurde
system("pause");


//Adresse von Zeigern überprüfen! Verwendung von undefinierten Zeigern führt zu Speicherzugriff-Fehlern
//Hier ein Beispiel für hängender Zeiger:

int * pPointer = new int;		//Pointer vom Typ integer wird angelegt
	cout << pPointer;			// Zeigt die Speicheradresse des Zeigers im Heap an
	delete pPointer;			// macht die Speicher wieder frei
	cout << pPointer;			// zeigt die Speicheradresse (des nun freien Speichers) an. DANGLING POINTER
	
	// *pPointer = 10;			// erneuter Zugriff auf diesen Pointer kann jetzt einen fatalen Fehler auslösen
	pPointer = 0;				// guter C-Code: Pointer wird Nullpointer gesetzt, ist jetzt kein DP mehr.

//mit rohen Zeigern durch rohe Arrays iterieren
	int *iptr = 0L;
	int iarray[5] = {1, 2, 3, 4, 5};	//rohes 5 elementiges Array
	iptr = &iarray[0];	// oder iptr = iarray: Mit Zeiger auf erstes Element im Array zeigen lassen
		for (size_t it = 0; it < sizeof(iarray)/sizeof(int); ++i){
		cout << *(iptr + it) << endl;	
		}

//das ganze besser, c++ like mit <vector> (oben einbinden)
	vector<int> vec(5);
	for( int i = 0; i<5; ++i){
	vec.at(i) = i+1; // Werte 1-5 zuweisen
	}
	for (vector<int>::iterator it =vec.begin(); it !=vec.end(); ++it){
		cout << *it << endl;		
	}
//weiterer Anwendungszweck von Zeigern: Dynamisches Anfordern von Speicherplatz zur Laufzeit



system("pause");
return 0;
}

