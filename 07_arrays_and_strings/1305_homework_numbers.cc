/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 3; tab-width: 3 -*-  */
/*
 * main.cc
 * Copyright (C) 2014 flo <>
 * 
 * foobar-cpp is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * foobar-cpp is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// * Programm demands a positive integer,
// * if integer is dividable by 3, 2 is added, else 4 is subtracted. This is carried out as long 0 is reached.
// * during this process, every value is printed as well as the steps needed
// * if user enters a value < 0 at the beginning, an error is reported

int main()
{
	int zahl = 0; int stepcount = 1;
	cout << "Please enter a positive integer value" << endl;
	if(!(cin >> zahl)){
		cout<<"Input error\n"<<endl;
	}
	while(zahl<1){
		cout << "Value not positive or 0. Please enter a value > 0\n"<<endl;
		cin>>zahl;
		}
	while(!(0>=zahl)){
		if(0==zahl%3){
			zahl+=2;
		}
		else{
			zahl-=4;
		}
		cout <<"Step number: "<< stepcount<< "  Value right now: " << zahl <<endl;
		stepcount++;
	}
	cout << "finished after "<<stepcount-1<< " steps\n"<<endl;
	return 0;
}

