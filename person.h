#include <string>
#include "datum.h"
using namespace std;


class Person{

private:
	string vname;
	string name;
	int jahr;
	int plz;
	int alter;
	int monat;
	int tag;
public:
	Person();
	Person(string, string, int, int);
	Person(string, string,int, Datum);
	void info();
	void setVname(string);
	string getVname();
	void setName(string);
	string getName();
	void setJahr(int);
	int getJahr();
	int getMonat();
	void setMonat(int);
	int getTag();
	void setTag(int);
	int getPlz();
	void setPlz(int );
	int getAlter();

};