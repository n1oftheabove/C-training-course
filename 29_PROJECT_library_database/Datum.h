#pragma once
#include<string>
#include<iostream>
using namespace std;

class Datum{
	protected:
		int tag;
		int monat;
		int jahr;
	public:
		Datum();
		Datum(int, int, int);
		~Datum();
		int getTag();
		int getMonat();
		int getJahr();
		void setTag(int);
		void setMonat(int);
		void setJahr(int);
		string info();
};