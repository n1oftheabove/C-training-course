#include "Medium.h"
#include <iostream>
using namespace std;

Medium::Medium(){
setTitel("titel");
vdatum = Datum();
}
Medium::Medium(string titel, Datum d, int kont){
setTitel(titel);
setVdatum(d);
setKontingent(kont);
}

Medium::~Medium(){
}

void Medium::setTitel(string titel){
this->titel = titel;
}
string Medium::getTitel(){
return titel;
}

void Medium::setVdatum(Datum datum){
vdatum = datum;
}

Datum Medium::getVdatum(){
return vdatum;
}

bool Medium::istvorraetig(){
	return getKontingent() > 0;
}

void Medium::setKontingent(int kontingent){
this->kontingent=kontingent;
}

int Medium::getKontingent(){
return kontingent;
}

bool Medium::ausleihen(){
	if (istvorraetig()){
		setKontingent(getKontingent() - 1);
	return true;
	} else return false;
}

void Medium::zurueckg(){
	kontingent++;
}

string Medium::info(){
	return "Titel: " + getTitel() + ", Datum : " + getVdatum().info() + ", Kontingent: " + to_string(getKontingent());
} //getVdatum().info() funktioniert, weil getVdatum ein Datum zurückgibt
