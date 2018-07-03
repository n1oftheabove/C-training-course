#pragma once
#include <string>

using namespace std;

class Person{
	private:
		string name;
	public:
		Person();
		Person(string);
		~Person();
		void setName(string);
		string getName();
		void info();
		//virtual sorgt f�r die sp�te Bindung, d.h. es wird erst zur Laufzeit entschieden, welche Methode aus
		//gew�hlt wird
		virtual int berechneGehalt() = 0; //wird nur in den Unterklassen implementiert! muss aber definiert werden, damit in der info
		//methode benutzt werden kann
		//static methode, die aufgerufen wird, und alle personen sammelt und ihr gehalt addiert
};