#include<iostream>
#include<cstdlib>
using namespace std;

//ARRAYS AND CONTROL STRUCTURES
	//Interation
	//if--else
	//switch--case
	
int main(){
	int x = 34;

	//Arrays, Elemente müssen alle vom gleichen Typ sein, Indexe von 0 bis n-1; negative Indexe oder floats nicht erlaubt
	int geb_datum[3]; //0-te, 1-te, und 2-te
	geb_datum[0] = 19; geb_datum[1] = 1; geb_datum[2] = 1981;
	// Elemente auf der Konsole ausgeben
	cout << geb_datum[0];
	cout << geb_datum[1];
	cout << geb_datum[2];
	//oder kürzer
	for(int i = 0; i < 3; i++) cout << geb_datum[i]; //lokale Variabel i ist an Block gebunden
	//mit while
	int i = 0;
	while(i<=2){cout<<geb_datum[0];i++;}
	
	do{cout<<geb_datum[0]; i++;
	}while(i<=2);				//Anweisungen werden mindestens einmal ausgeführt, passt z.b. bei Programmen, wenn dem User ein Menü präsentiert werden soll, unabhängig, ob seine darauffolgende EIngabe korrekt ist oder nicht

system("PAUSE");
return 0;
}
