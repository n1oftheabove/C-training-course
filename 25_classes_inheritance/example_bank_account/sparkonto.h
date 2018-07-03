#pragma once
#include <iostream>
#include "konto.h"

class Sparkonto : public Konto {
	private:	
		unsigned int zins;
	public:
using Konto::Konto;
		Sparkonto();
		Sparkonto(unsigned int, string, string, string, string, unsigned int);
		void setZins(unsigned int);
		unsigned int getZins();
		double jahresabschluss();
		
		void printdata();
		
};