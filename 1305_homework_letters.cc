/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 3; tab-width: 3 -*-  */
/*
 * main.cc
 * Copyright (C) 2014 flo <>
 * 
 * letters is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * letters is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// this programm demands a max 50 characters long string, examines them if
// "p"'s and "r"'s appear in them. After min. 2 p and 1 r appeared, it prints out the entered string and a string, where
// "p"'s and "r"'s are deleted.

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	char letters[50];
	//string str1;
	//string str2(5,'X'); //creates string with 5 "X"'s
	int countp =0;
	int countr =0;
	int i=0;
	
	while(!((2<=countp && 1 <=countr) || i>49)){
		cout << "Please enter a letter" << endl;
		cin>>letters[i];
		if('p'==letters[i]) countp++; else if('r'==letters[i]) countr++;
		cout << "p's: "<< countp << "r's: " << countr << endl;
		cout << "letters entered " << i+1 << endl;
		i++;
	//getline(cin, str1);
	}
	cout << "you have entered " << letters <<endl;

	char newarray[50]; int a=0;
	for(int i=0; i< sizeof(letters)/sizeof(char);i++){
			while('p'==letters[i+a] || 'r'==letters[i+a]){
			a++;
			}
			letters[i]=letters[i+a];
		}
	cout << "removing 'p's and 'r's: "<< newarray <<endl;
	system("PAUSE");	
	return 0;
}

