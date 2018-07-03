#include "person.h"
#include "angestellter.h"
#include <iostream>

using namespace std;

int main(){
	Person *p1 = new Person("Peter Meier");
	p1->info();
	Person *p2 = new Angestellter(); //Polymorphie
	p2->info();

	Angestellter *a1 = new Angestellter("Anton Abel", 10);
	a1->info();
	LeitenderAngestellter *la1 = new LeitenderAngestellter("berthold Beier", 500);
	la1->info();
	

	system("pause");
}