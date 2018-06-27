#include <iostream>
#include "person.h"
#include "datum.h"

using namespace std;

int main(){

Person p1;
Person p2("Hans", "Maier", 1960, 44787);
//Datum d1(31,6,1970); //ungültig
//Datum d2(30,6,1970); // ungültig
p1.info();	//Max Mustermann, PLZ 12345, Geburtsjahr 1950
p2.info();	//Hans Meier, PLZ 44787
cout << "Alter: " << p2.getAlter() << endl;

// selbst eingeben
string Vorname;
string Name;
int gebjahr;
int gebmonat;
int gebtag;
int myplz;
cout << " geben Sie Ihren Vornamen ein! " <<endl;
cin >> Vorname;
cout << " geben Sie Ihren Namen ein! " << endl;
cin >> Name;
cout << " geben Sie ihr Geburtsjahr ein! " << endl;
cin >> gebjahr;
cout << " geben Sie ihren Geburtsmonat ein! " << endl;
cin >> gebmonat;
cout << " geben Sie ihren Geburtstag ein! " << endl;
cin >> gebtag;
cout << "geben Sie ihre PLZ ein! " << endl;
cin >> myplz;
Datum d1(gebtag, gebmonat, gebjahr);
Person p3(Vorname, Name, myplz, d1);
p3.info();
d1.info();
// besser: Variablen in den Heap packen!
Person *p4 = new Person( "Albert", "Abel", 10243,d1);
p4 -> info();



system("pause");
return 0;
}
