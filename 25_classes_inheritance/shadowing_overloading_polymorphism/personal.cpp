#include "personal.h"


Personal::Personal(){
	name = " ";
	pers_nr = 0;
	gehalt = 1800;

}
Personal::Personal(string n, unsigned int pn, unsigned int g){
	name = n;
	pers_nr = pn;
	gehalt = g;

}
Personal::Personal(string n, unsigned int pn){
	name = n;
	pers_nr = pn;
	gehalt = GG;

}
Personal::Personal(string n){

	name = n;
	pers_nr = 0;
	gehalt = GG;
}
void Personal::setGehalt(unsigned int g){
	gehalt = GG;
}
void Personal::setName(const string &n) {

	name = n;
	
}
void Personal::setPers_nr(unsigned int pn){
	pers_nr = pn;
}
unsigned int Personal::getGehalt(){
	return gehalt;
}
string Personal::getName()const {

	return name;
	
}
unsigned int Personal::getPers_nr(){
	return pers_nr;
}
void Personal::print_Data()
{
	cout <<"+Name		     :" << getName() << endl;
	cout << "+Personalnummer:" << getPers_nr() << endl;
	cout << "+Gehalt		:" << getGehalt() << endl;
}

