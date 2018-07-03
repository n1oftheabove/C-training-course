#pragma once

#include "Medium.h"
#include "Autor.h"
#include "Datum.h"
#include<string>
#include<iostream>

using namespace std;

class Buch:public Medium{
private:
	Autor autor;
	string isbn;
public:
	Buch();
	Buch(string, Datum, int, Autor, string);
	~Buch();
	void setIsbn(string);
	string getIsbn();
	void setAutor(Autor);
	Autor getAutor();
	string info();

};