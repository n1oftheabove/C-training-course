#include "Person.h"
#include "Mitarbeiter.h"
#include "Datum.h"
#include "Medium.h"
#include "Magazin.h"
#include "Autor.h"
#include "Buch.h"
#include "Leser.h"
using namespace std;
#define N 3

int main(){
/*
Datum d1(2,5,20);
Datum d2;

d1.info();
d2.info();
*/
Person p1("T","W", "EW", "B", 10439);
cout << p1.info() << endl;

Datum d1(2,5,20);
cout << d1.info() << endl;

Mitarbeiter m1("S", "T", "RF", "C", 10405, "ID12034");
cout << m1.info() << endl;

Medium med1("1984", d1, 20);
cout << med1.info() << endl;

Medium med2("Brockhaus", d1, 0);

Magazin mag1("Der Spiegel", d1, 5, 43);
cout << mag1.info() << endl;

Autor aut1("Mann", "Thomas", "hat@keine.de");
cout << aut1.info() << endl;

Buch buch1("Der Zauberberg", d1, 20, aut1, "3245-23-45435-23");
cout << buch1.info() << endl; // hier wird für aut1 der defautl Konstr. aufgerufen

Leser l1("T","Flo", "xStrass", "Berlin", 1407, "L3456",2);
cout << l1.info() << endl;

l1.medienausleihen(med1);
cout << "Nach der Ausleihe: " <<endl;
cout << l1.info() << endl;
cout << med1.info() << endl;
cout << med1.getKontingent() << endl;
// nach der Ausleihe verändert sich Kontingent & ausgeliehene Medien (für Benutzer) nicht.


system("pause");
return 0;
}