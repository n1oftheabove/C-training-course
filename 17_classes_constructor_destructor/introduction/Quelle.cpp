//folgendes Programm ist nicht lauffähig, class Student (mit Konstruktor, Destrukto, Attribute) ist nicht definiert


int main(){
int n;

class Student *st;
cout << "n = ";
cin >> n ; 
getchar();

st = new Student[n];

for(int i = 0; i < n ; i++){
	st[i].eingabe();		// mit Punkt-Operator, da st keine Zeiger!
}

for (int i = 0; i < n; i++){
	st[i].output();
}

delete [] st; // ruft destruktor auf
system("pause")

return 0;

}


// weiteres beispiel+

int main(){
class Student *st[100];
char jn = 'n';
int i = 0, n;
do{
	st[i] = new Student;		//erzeugt Zeiger auf Student-Objekt
	(st[i])->eingabe();			// mit Pfeil-Operator, da st Zeiger. Runde klammer nicht unbedingt nötig
	cout << "Noch eine Datei? [j/n]"<<endl;
	cin>>jn; getchar();
	i++;
}while(jn == "j");

n=i;

for(int i = 0; i < n; i++){
	(st[i])->output();
}

//Zeiger wieder löschen
for(int i = 0; i < n; i++){
	delete st[i];
}

system("Pause");
return 0;

}

//