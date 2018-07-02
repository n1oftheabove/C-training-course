#include<iostream>
#include<cstdlib>
using namespace std;



// Funktionen

	//DEKLARIEREN kommt eigentlich in die Header Datei
		void simple_function();
		void area_of_disk(double radius);

//Globale Variable
	int glob_var=1;

int main(){

//lokale Variable in main (nur dort gültig)
	int lok_main_var=1;
	int glob_var=1;				//überdeckt globale Variable
	int result=0;	
	result = lok_main_var + ::glob_var	// :: ist der scope resolution operator, weist darauf hin, dass auf globale Variable referenziert wird

simple_function();		//Aufruf der Funktion

cout << "Nach dem Funktionsaufruf\n";
system("Pause");
return 0;
}

	//DEFINIEREN simpler Funktion, kommt eigentlich in Extra quelldatei. Ist dem Programmierer häufig verborgen
		void simple_function(){
			cout << "Funktion bei der Ausführung\n";
			}

		void area_of_disk(double radius){   // Wenn Funktion mit Berechnung fertig, werden alle Variablen auf dem Stack gelöscht
											//Stack = Speicherbereich für lokale Variablen des aktuellen Gültigkeitsbereichs
			const double PI = 3.141592653;
			double A = PI * radius * radius;
			cout << "Fläche des Kreises: " << A << endl;
			}
