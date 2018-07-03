#include <iostream>
#include<string>
#ifndef PERSONAL_H
#define PERSONAL_H
using namespace std;

static const unsigned int  GG = 1900;
class Personal{
	string name;
	unsigned int pers_nr;
	unsigned int gehalt;
public:
	Personal();
	Personal(string n, unsigned int pn, unsigned int g);
	Personal(string n, unsigned int pn);
	Personal(string n);
	void setName(const string &n);
	string getName() const;
	void setPers_nr(const unsigned int pn);
	unsigned int getPers_nr();
	void setGehalt(const unsigned int g);
	unsigned int getGehalt();
	void print_Data();
};
#endif // !PERSONAL_H
