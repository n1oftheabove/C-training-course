#pragma once
#include "sbahn.h"
using namespace std;

Sbahn::Sbahn(int linie, string fahrer, string start, string ziel, string schaffner, int anzahlWagen, int anzahlSitzplaetzeProWaggon) : Verkehrsmittel(linie, fahrer, start, ziel)
{
	setSchaffner(schaffner);
	setAnzahlWagen(anzahlWagen);
	setAnzahlSitzplaetzeProWaggon(anzahlSitzplaetzeProWaggon);

}

string Sbahn::getSchaffner(){
	return schaffner;
}

int Sbahn::getAnzahlWagen(){
	return anzahlWagen;
}

int Sbahn::getAnzahlSitzplaetzeProWaggon(){
	return anzahlSitzplaetzeProWaggon;
}

void Sbahn::setSchaffner(string schaffner){
	this -> schaffner = schaffner;
}

void Sbahn::setAnzahlWagen(int anzahlWagen){
	this -> anzahlWagen = anzahlWagen;
}

void Sbahn::setAnzahlSitzplaetzeProWaggon(int anzahlSitzplaetzeProWaggon){
	this -> anzahlSitzplaetzeProWaggon = anzahlSitzplaetzeProWaggon;
	}

void Sbahn::info(){
	Verkehrsmittel::info();
	cout << "Schaffner: " << schaffner << ", Anzahl Wagen: " << anzahlWagen << ", Anzahl Sitzplaetze pro Wagon: " << anzahlSitzplaetzeProWaggon << endl;
	}

void Sbahn::print(ostream &os){
	os << "Linie " << getLinie() << ", Fahrer: " << getFahrer() << ", Start: " << getStart() << ", Ziel: " << getZiel() << endl << "Schaffner "<< schaffner << ", Anzahl Wagen " << anzahlWagen << ", Anzahl Sitzplaetze pro Waggon " << anzahlSitzplaetzeProWaggon << endl;
}