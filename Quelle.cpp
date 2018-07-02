//22052014
//23052014

//primitive Datentypen
	//casting
//Variable
//compilierung --> Linken --> Ausführung
	//main Methode
//Kontrollstrukturen
//Methode (Funktionen) in c++
	//Methoden Deklaration und Methoden Definition, Methoden Aufruf
//Header Dateien

//Struct, Arrays (auch mehrdimensionale Arrays)
//Objekt Orietierung
	//Konstruktoren, Desktruktoren
	//Kopierkonstruktor
	//Standard (Default) Konstruktor
		//wird erzeugt von dem Compiler, falls in der Klasse kein einziger Konstruktor
		//angegeben wurde
	//Standard (Default) Kopierkonstruktor, der wird IMMER erzeugt.
	//Standard (Default) Destruktor
		//wird automatisch erzeugt, muss aber geschrieben werden, wenn man einen eigenen Konstruktor geschrieben hat
	//delete operator, new operator
	//dynamische Attribute, Pointer
	
	//wenn eine Klasse ein dynamisches Attribut hat, welche im Konstruktor mit new [] alloziert wird, braucht die Klasse einen dynamischen				Speicher, und es wird ein Destruktor benötigt. Für jedes new [] braucht es ein delete

//Heute: STACK und HEAP
	//STACK: (default 1 MB groß) muss man vorher einstellen
		// statische Objekte und lokale Variablen einer Methode gehen auf den STACK. Z.b. class Student st1; st1 ist statisch erzeugtes Objekt
		// vor Programmieren muss man abschätzen, wie viele Statische Objekte man im Code hat
		// lokale Variable belegen innerhalb ihrer Methode einen Anteil im Speicher. Je mehr Methoden man also aufgerufen hat, desto voller kann also der Speicher sein 
		// statische Objekte sind nur innerhalb ihrer übergeordneten Methode sichtbar
	//HEAP: Größer, auch "dynamic memory" genannt.
		// dynamische Erzeugung class Student *st2; st2 ist dynamisch erzeugtes Objekt. st2 = new Student;
		// dynamisch erzeugte Objekte werden auf dem Heap angelegt
		// dynamisch erzeugte Objekte sollen in allen Methoden sichtbar sein, HEAP ist also ein Speicherbereich, der für globale Daten reserviert ist
		// Größe des HEAPS ist nur durch den im System verfügbaren Speicher begrenzt
		// der Zeiger selbst ist aber ein statisches Objekt und wird auf dem Stack hinterlegt

#include<iostream>
#include<cstdlib>
using namespace std;

class Student{
	private:
		int name;
	public:
	Student (){};
	Student(int name){};
	~Student(){};
	void methode(){
		cout << "eine Methode" << endl;
		}
	
};

int main(){
class Student st1;		//statisch
	st1.methode();
class Student *st2;		//dynamisch
st2 = new Student;
st2 -> methode();		//nicht Punktoperator!
(*st2).methode();		//äquivalenter Weg


{
class Student st1;		//statisch
	st1.methode();
}	//hier wird der Destruktor (wg. Blockende) aufgerufen, der das statische Objekt st1 vom STACK bereinigt

{
	class Student martin;
	class Student steffan;	//Konstruktor instanziert erst Martin, dann Steffan (auf STACK)
} //Destruktor räumt dann umgekehrt Speicher frei: Erst Steffan, dann martin

{
	class Student *a = new Student[10];		//erzeugt 10 Objekte von Klasse Student
	
	delete [] a;		//löscht wieder alle (in umgekehrter Reihenfolge). die delete-Methode ist wichtig, weil sonst wird nur der Zeiger entfernt!
}


{
class Student *t;
t = new Student;
t->methode();
(*t).methode();
//delete t; //steht dies hier, wird sofort an dieser Stelle wird der Destruktor aufgerufen und auch das Objekt t gelöscht 
}	//hier wird der Destruktor nicht aufgerufen, weil der Destruktor nur den STACK bereinigt. Es wird nach verlassen der Klammer nur der Zeiger gelöscht


system("pause");
return 0;
}