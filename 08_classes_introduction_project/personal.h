// personal.h

#include <iostream>
#include <string>
#ifndef PERSONAL_H
#define PERSONAL_H

using namespace std;

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
			// strukturen sind auch schon Klassen
		
			// Klasse realisieren (Bauplan):
		class Personal{ //"Personal" ist der Bezeichner
			// Eigenschaften (Daten) und Methoden von Personal
			std::string name;
			unsigned int pers_nr;
			unsigned int gehalt;
		}; // <- Semikolon am Ende!
		#endif
			//Es wird empfohlen, diese in die Headerdatei *.h zu schreiben.
			//Objekt instanzieren mit Klassen
			Personal person01;
			Personal person03,person02;

			#include<vector>
			std::vector<Personal> zeitarbeiter(100);		//erzeugt 100 Objekte der Klasse Personal
			std::vector<Personal> festanstellung;			//leerer Vektor der Klasse Personal
			Personal cStyleArray[20];						//20 Objekte der Klasse Personal, in C++ nicht empfohlen!
				//Objekte können auch zur Laufzeit erzeugt werden, das aber mit Bedacht einsetzen!