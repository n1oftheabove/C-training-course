#include<iostream>
#include<string>
#include<fstream>

//C++ Datei-Stream Klassen f�r das Auslesen und Beschreiben von Dateien
	//fstream: eine Sammlung von Funktionalit�ten zum Lesen und Schreiben (von iostream abgeleitet)
	//ofstream: dient nur zum Schreiben von Dateien
	//ifstream: dient nur zum Lesen von Dateien

using namespace std;

int main(){
	string dateiname;
	cout << "gebe den Dateinamen zum Lesen" << endl;
	cin >> dateiname;

	//IFSTREAM nur zum Lesen
		//falls aufgerufene Datei nicht existiert, Fehler!

	std::ifstream datei01;	//datei vom (default-)typ ifstream deklarieren, wird zum lesen angelegt
	datei01.open(dateiname);	//Verbindung zw. Dateiname und stream-Objekt hergestellt. falls beim Einlesen Fehler...
	if (datei01.fail()){
		cerr <<dateiname << " konnte nicht ge�ffnet werden" << endl;
	}
	
	//OFSTREAM nur zum schreiben

	std::ofstream datei02("F:\\C++ Kurs Comcave\\C++projects\\2306_lesson\\Einlesen von Dateien\\Einlesen\\ergebnisse.txt");	//eine Datei zum Beschreiben, falls Dateiname existent, wird deren Inhalt gel�scht!. Falls nicht, wird erstellt
	if(datei02.good()){
		cerr<<"ergebnisse.txt ist ge�ffnet bzw. erzeugt" << endl;
	}
	
	//FSTREAM f�r lesen und schreiben

	std::fstream f;
	f.open("F:\\C++ Kurs Comcave\\C++projects\\2306_lesson\\Einlesen von Dateien\\Einlesen\\ergebnisse.txt");
	if(!f){
		cerr << "Die Datei konnte nicht ge�ffnet werden"<<endl;
	}
	
	//Wenn eine Datei zum Beschreiben ge�ffnet wird: Entscheiden ob die Datei �berschrieben oder erg�nzt werden soll
	std::ofstream f2("test.txt", std::ios::out|std::ios::app);	//"app" f�r append. S.676,677 im Buch
	
	system("pause");
	return 0;
}