#include "Angestellter.h"

int main(void)
{
	Angestellter angestellter01;
	Personal personal01;
	angestellter01.setName("Max Mustermann");
	angestellter01.setPers_nr(40001);
	angestellter01.setZulagen(400);
	cout << "=============Grund Informationen=============" << endl;
	angestellter01.Personal::print_Data();

	cout << "============Angestellter===============" << endl;
	angestellter01.print_Data();
	
	cout<<"================Personal=================" << endl;
	personal01.print_Data();
	system("pause");

}