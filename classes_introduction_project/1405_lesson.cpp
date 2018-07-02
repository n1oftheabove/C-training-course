// 1405_lesson

#include <iostream>
#include <string.h>
#include <cstdlib>
#ifndef PERSONAL_H
#define PERSONAL_H

using namespace std;



struct student_s{
	char name[20];
	char vorname[20];
	int matrknr;
};

class Student{		//Regel: nur legale Identifiers verwenden (keine Variablennamen,
					// keine Ziffern am Anfang, ...), Konvention: Klassen mit Großbuchstaben, Methoden mit Großbuchstaben
					//Zugriff auf Elementvariable: objektname.elementname
					// was kann eine Klasse mehr als ein STRUCT? Klassen enthalten noch VERHALTEN, d.h. von Operationen (METHODEN)
					// 
public:				//Access-Modifier. Wenn hier nix steht: Default = Public
	char name[20];		//Merkmale (Beschreibungsmittel) oder auch Attribute oder auch Elementvariablen
	char vorname[20];
	int matrknr;
	// Konstruktoren: Erzeugen eine konkrete Instanz aus einer Klasse
public:
	void output(){   //hat kein Rückgabewert
		cout<<mtrknr<< "--->" <<vorname<<" "<< name<<endl;
	}

};

//STRUCT
	// Motivation: z.b. array verlangt für jeden Eintrag den gleichen Datentypen. Es gibt aber auch Problemstellungen, die utnerschiedliche erfordern. Lösung:
int main(){

struct student_s s;
struct student_s s2;
int mnr=789;
//cout << "ich will mnr:" <<endl;
//cin >> mnr;

strcpy_s(s.vorname,"Jim");
strcpy_s( s.name, "Smith");
s.matrknr = 1234;


s2.matrknr = 1235;
strcpy_s(s2.vorname,"Ayana");		//char ca[12] = "ich bin char array"; ging nicht!

Student c1; //Datentyp: STUDENT
strcpy_s(c1.name,"Castle");
strcpy_s(c1.vorname,"Frank");
c1.matrknr = 1234;

c1.output();
//int erg = c1.output() //geht nicht, da output void ist
system("PAUSE");
}




// Klassen genau ähnlich. Wenn man aber nur arrays ersetzen möchte, kann man aber bei struct bleiben!



/*
class Klassenname{
	Datentyp elementName;
	rückgabewertdatentyp methodenname(parameter){
	Anweisungsblock;
							}
};
*/


// Grundlagen zur Klassen
	//Prozedurale (oder auch strukturierte/imperative) Programmierung:
		// *FUNKTION schreiben, der Wert(e) (DATEN) eingegeben werden, und die Wert zurückgibt
		// *Lösung des Problems heißt Algorithmus
	//Objektorientierte Programmierung
		//Ziel: Daten und Funktion zu einer Einheit zusammenzufassen
		//Funktionen fremder Objekte ist es nicht erlaubt, diese Daten zu manipulieren
		//Eigentlich Entprechung mit Objekten in der realen Welt:
			//OBJEKT Auto: DATEN Farbe, Leistung, Geschwindigkeit, Gewicht,... METHODEN bremsen(), lenken(), hupen(), fahren()
		//KLASSEN: Zur Verwaltung von gleichartigen Objekten. Autobeispiel: Die Klasse wäre etwa der Konstruktionsplan des Autos
			//sind Baupläne für Objekte, welche erst zur Laufzeit des Programms als Instanz erstellt werden.
			//z.b. können zwei bestimmte Autos mit individuellen Eigenschaften INSTANZEN von "class Auto" sein
			// belegt noch keinen Speicher als solche, sondern erst, wenn ein Objekt dieser Klasse instanziert haben
		
		// Klasse realisieren (Bauplan):
		class Personal{ //"Personal" ist der Bezeichner
			// Eigenschaften (Daten) und Methoden von Personal
		}; // <- Semikolon am Ende!
			//Es wird empfohlen, diese in die Headerdatei *.h zu schreiben.
