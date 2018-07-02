#include<iostream>
#include<cstdlib>

using namespace std;

// Deklaration einer Klasse

class Folge{
private:
	//int ff[];	//Ein Array von floats. Angenommen, Elementeanzahl möchte man dynamisch machen, geht nicht! Also: Pointer
	int* ff;	//Pointer-Definition, oder auch int *ff
	int n;
public:
	Folge(int size){   //KONSTRUKTOR, versieht 
	n = size;
	ff = new int[size];		//Dieser Konstruktor erstellt dann das wirkliche Array. Der nötige Speicherplatz kann zur Laufzeit geändert werden. 
	}
	void print();
};


/*int main(){
	class Folge f1(10);	// Konstruktor aufrufen, Folge f1(10); ginge auch
	class Folge f2(5);
	cout << "==============f1============"<<endl;
	f1.print();
	cout << "==============f2============"<<endl;
	f2.print();
	system("PAUSE");
return 0;
}
*/
// Implementieren der Klasse

void Folge::print(){
	for (int i = 0; i<n; i++){
		cout<< ff[i]<<" "<<endl;
	}
}