#include<iostream>
#include<cstdlib>
using namespace std;


//es gibt Konstruktoren und aber auch DESTRUKTOREN
	//der zugehörige Destruktor zum Konstruktor hat den gleichen Namen


class Student{

private:
	int jahrgang;
	int mat_nr;
public:
// Konstruktoren
	Student(){};
	Student(int jh, int mn){
		cout << "Initialisierung..." << endl;
		jahrgang = jh;
		mat_nr = mn;
	};
	
//Destruktoren: ~
	~Student(){
		cout << "Destruktor wird aufgerufen..." <<endl;
		}
	void output();
	void input();
};

int main(void){
	class Student s1(1987, 1234);
	class Student s2;
	s2.input();
	s1.output();
	s1.input();

	//demonstration lokale Variable:	
	{
		cout << "------Block 103 -------" <<endl;
		class Student x(1934, 123);
		x.output();
	};	//ab hier ist x nicht mehr gültig.
	// Destruktor für Student wird genau dann aufgerufen, wenn der Gültigkeitsbereich verlassen wird.
	// das leert den Speicher -> Programm wird schneller ab hinreichend komplexen Programmen
	cout << "------Block 103 -------" <<endl;

	system("pause");
	}

void Student::input(){
	cout << "jahrgang:   >";
	cin>> jahrgang;
	cout << endl;
	cout << "matrikelnummer   >";
	cin >> mat_nr;
}

void Student::output(){
cout << "jahrgang:    "<<jahrgang<< "Matrikelnummer:   "<<mat_nr<<endl;
}


// variablen werden zur Laufzeit aus dem Speicher gelöscht, wenn beim Compilieren festgestellt wurde, dass im restlichen Code die Variable nicht mehr gebraucht wird. Java hat dafür einen Garbage-Collector (der aber eben auch ressourcen verbraucht), in C++ muss man darüber selbst den überblick behalten
//destruktor stellt also speicher frei, den dynamische objekte beansprucht haben
