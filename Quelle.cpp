#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
//KONTROLLSTRUKTUREN

	//Bedingte Anweisungen
		//if
	//Verzweigungen
		//else,else if,switch case
	//Schleifen
		//while, do while, for

	// Anweisungen
		// Anweisung1 ;
		// Anweisung2 ;
	// Anweisungsblöcke
		// {
		// Anweisung1;
		// Anweisung2;
		// }
	// Bedingte Anweisung
		//if(Bedingung){
		//	Anweisung(en);
		// }
		// geschweifte Klammer kann bei nur einer Anweisung auch weggelassen werden		

		//z.B.
			int val={0};
			cout << "Wert ungleich null eingeben: ";
			cin >> val;
			if(val){//checkt, ob val !=0, gibt dann true zurück, Bedingung der Schleife erfüllt
				cout << val << endl;			//val wird ausgegeben
			}
		//anderes Beispiel
			int val={0};
			cout << "Wert ungleich null eingeben: ";
				if(cin >> val){//checkt, ob die Eingabe von val über cin korrekt erfolgte (gültiger Ganzzahlwert)!
				cout << val << endl;			//val wird ausgegeben
			}
		//bzw.
			int val={0};
			cout << "Wert ungleich null eingeben: ";
				if(!(cin >> val)){ //! ist der NOT-Operator
				cerr << "Wert nicht erlaubt" << endl;
				return 1; //Programmende
				}
		// LOGISCHE OPERATOREN: && UND, || ODER, ! NICHT
		// NIEMALS: if(val==0){}, sondern if(!val){}

	//Verzweigte Anweisung (IF-ELSE)
		int val={0};
		if((val>=1) && (val <= 10)){
			cout << val << std::endl; 
		}
		else {
			cout << "Ungültiger Wertebereich: " << val << endl;
		}
		//ternärer Operator: Bedingung ? Ausdruck1 : Ausdruck2
	//Mehrfachverzweigung, Fallunterscheidung (SWITCH)
		int choice={0};
		cout<<"Bitte Sprache wählen\n";
		cout<<"-1- Deutsch\n";
		cout<<"-2-Englisch\n";
		cout<<"-3-Spanisch\n";
		cout<<"Ihre Auswahl : ";
		if(!(cin >> choice)){
			cout << "Fehler bei der Eingabe\n";
			return 1;
		}
		switch(choice){
			case 1: cout << "Willkommen\n";
				break;
			case 2: cout << "Welcome\n";
				break;
			case 3: cout << "Bienvenido\n";
				break;
			default: cout << choice << ":Ungültige Eingabe\n";
			}
	//Mehrfachverzweigung, ELSE-IF
		int choice={0};
		cout<<"Bitte Sprache wählen\n";
		cout<<"-1- Deutsch\n";
		cout<<"-2-Englisch\n";
		cout<<"-3-Spanisch\n";
		cout<<"Ihre Auswahl : ";
		if(!(cin>>choice)){
		cout<<"Fehler bei der Eingabe\n";
		return 1;
		}
		if(1==choice){
		cout << "Willkommen\n";
		}
		else if (2==choice){
		cout << "Welcome\n";
		}
		else if (3==choice){
		cout << "Bienvenido\n";
		}
		else{
			cout << choice << ": Ungültige Eingabe\n";
		}		
}
		
	//SCHLEIFEN
		//in C++11 vier Formen:
			// kopfgesteuert
				// while()
			// fußgesteuert 
				// do while()
			//Zählschleife
				// for()
			//Mengenschleife (auch als foreach-Schleife benannt, range-basierte for-Schleife, neu in C++11)

		// Inkrement (analog Dekrement)
			//klassisch: var = var + 1;
			//C++: var+=1; oder var++
			//Unterschied Prä- oder Postfix, d.h. ++var oder var++: Bei var++ wird vorheriger Wert
				// in Anweisung benutzt, bei ++var schon gleich der nächste Wert:
					int var={1};
					cout << var++ << endl1; //1
					cout << var << endl;	//2
					cout << ++var <<endl;	//3

		//while()
			// Schleifenrumpf mit Anweisungen wird solange wiederholt, wie die Schleifenbedingung true zurückgibt
				int summe={0}, val={0}, n={0}, i={0};
				cout << "Wie viele Werte wollen Sie addieren: ";
				cin >> n;
				while(i<n){
				cout << i+1 << "ter Summand:";
					if(!(cin >> val)){
						cout << "Fehler bei der Eingabe\n";
						return 1;
					}
					summe+=val;
					++i;										//inkrementierung
				}
				cout << "Summe aller Werte: " << summe << endl; //gibt summe als Ergebnis aus, wenn Abbruchbedingung der Schleife erfüllt ist
		//do while()
			// Bedingung wird immer erst überprüft, nachdem Anweisungen ausgeführt wurden. D.h. auch, dass alle Anweisungen immer min. einmal ausgeführt werden
				//einfaches Taschenrechner Beispiel
				int calc={0}, val={0}, wahl={0};
				cout << "Wert eingeben: ";
				if(!(cin>>calc)){
				cout<<"Fehler bei der Eingabe\n";
				return 1;
				}
				do{
					cout << "-1- Addieren\n";
					cout << "-2- Subtrahieren\n";
					cout << "-0- Ergebnis und Ende\n";
					cout << "Ihre Wahl:";
					if(!(cin>>wahl)){
					wahl=0; //Schleife beenden
					}
					if(wahl !=0){
						cout << "Wert eingeben: ";
						if(!(cin>>wahl)){
							wahl=0; //Schleife beenden
							}
						}
					switch(wahl){
						case 1 : calc+=val; break;		//Addition
						case 2 : calc-=val; break;		//Subtraktion
						default: cout << "Ergebnis: " << calc << endl;
					}
				}while(wahl !=0);

		// Zählschleife FOR()
			//for(INITIALISIERUNG; BEDINGUNG; AKTUALISIERUNG){Anweisung}
				//Bsp. Programm, zeigt einfach an, der wievielte Schleifendurchlauf grade passiert
				int ende={0};
				cout<<"Wie oft soll die Schleife durchlaufen werden?";
				if(!(cin>>ende)){
				cout<<"Fehler bei der Eingabe\n";
				ende=0;
				}
				for(int count=0; count < ende; ++count){
					cout << count + 1 << ". Schleifendurchlauf\n";
				}
		// continue-Anweisung: Beendet im Ggsatz zu break nur den aktuellen Schleifendurchlauf und springt zur Bedingung zurück
}
