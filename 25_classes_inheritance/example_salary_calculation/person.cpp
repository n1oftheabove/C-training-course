#include <iostream>

#include "person.h"


void Person::setName(string name){
	if (name.length() < 2){
		name = "Max Mustermann";
	}
	this -> name = name;
}

string Person::getName(){
	return name;
}

Person::Person(){
	name = "Max Mustermann";
}

Person::Person(string name){
	setName(name);
}

void Person::info(){
	std::cout << "Person: " << name << " , Gehalt: " << berechneGehalt() << std::endl;
}

Person::~Person(){
	std::cout << "Person " << name << " gelöscht" << std::endl;
}

int Person::berechneGehalt(){
	return 0;
}