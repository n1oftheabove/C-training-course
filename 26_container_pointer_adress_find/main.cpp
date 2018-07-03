//Standard Template Library
	//nimmt man gerne, wenns um Datenstrukturen/Containern geht
	//rad muss nicht neu erfunden werden

#include <iostream>
#include <algorithm> //z.b. für find

using namespace std;

int mainx(){

	int zahlen[9] = {1,2,3,4,5,6,7,8,9};
	//DURCHSUCHEN Ob Zahl 4 enthalten ist.
	
	cout << &zahlen << endl; // Adresse aufs erste Element
	cout << *zahlen << endl; // 1

	int *found;
	found = find(zahlen, zahlen+9,4);	//gibt genau den Zeiger aufs Element, das er gefunden hat, sonst aufs erste Element nach dem letzten Element

	if (found != zahlen + 9){
		cout << "Gefunden: " << found << endl;
	} else {
		cout << "Nichtgefunden: " << endl; //wäre etwas nicht initialisiertes
	}

	int zahlen2[9] = {3, 8, 1, 9, 5, 6, 4, 2, 9};
	// zahlen2 soll beim Sorten aber nicht überschrieben werden
	int zahlen3[8];	
	copy(zahlen2, zahlen2 +9, zahlen3);

	// SORTIEREN
	
	for (int i = 0; i < 9; i++){
		cout << zahlen2[i] << endl;
	}
		
	sort(zahlen2, zahlen2 + 9);	
		
	cout << "Nach der Sortierung" << endl;
	for (int i = 0; i < 9; i++){
		cout << zahlen2[i] << endl;
	}

	//REVERSEN
	reverse(zahlen2, zahlen2 + 9);
	
	system("pause");
	return 0;

}
