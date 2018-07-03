#pragma once
#include "Person.h"
#include<string>
#include<iostream>
using namespace std;

class Mitarbeiter:public Person{
protected:
	string id;
public:
	Mitarbeiter();
	Mitarbeiter(string, string, string, string, int, string);
	~Mitarbeiter();
	void setId(string);
	string getId();
	string info();

};