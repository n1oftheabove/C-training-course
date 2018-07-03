#include <iostream>
#include <algorithm>
#include <vector> //vectorklasse für dynamische container
using namespace std;

int main(){
	vector<int> zahlen(10);
	cout << zahlen.size() << endl;
	cout << zahlen.capacity() << endl;
		
	zahlen.reserve(20);
	cout << "nach reserve(20) " << endl;	//reserviert nur speicher an 20. stelle
	cout << zahlen.size() << endl;
	cout << zahlen.capacity() << endl;
	zahlen.resize(20);
	cout << "nach resize(20) " << endl;
	cout << zahlen.size() << endl;
	cout << zahlen.capacity() << endl;

	srand(0);	
	for (int i=0; i < zahlen.size();i++){
		zahlen[i]=rand() % 9 +1;
	}
	
	//zahlen[11] = 11; wird von vielen Compilern durchgelassen
	//zahlen.at(12) = 12; //macht eine Prüfung

	sort(zahlen.begin(), zahlen.end());
	for (int i = 0; i < zahlen.size(); i++){
		cout << zahlen[i] << endl;
	}

	// BINÄRE SUCHE
	bool found = binary_search(zahlen.begin(), zahlen.end(), 50);
	cout << "50 gefunden: " << found << endl;
		
	system("pause");
}