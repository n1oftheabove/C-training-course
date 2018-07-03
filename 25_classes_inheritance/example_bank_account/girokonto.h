#pragma once
#include <iostream>
#include "konto.h"

class Girokonto : public Konto {
	private:
	unsigned int dispo;
	public:
using Konto::Konto;
		Girokonto();
		Girokonto(unsigned int, string, string, string, string, unsigned int);
		void setDispo(unsigned int);
		unsigned int getDispo();
		void geldeinzahlen(unsigned int);
		bool geldabheben(unsigned int);
		void printdata();

};