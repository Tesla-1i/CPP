#include <iostream>
#include <cstring>
#include "70.h"
using namespace std;

Point::Point(char *n, double a, double b){
	x = a;
	y = b;
	if (n){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else{
		name = new char[8];
		strcpy(name, "no name");
	}
	cout << name << " constructing" << "\n";
}
Point::~Point(){
	cout << name << " distructing\n";
	delete[] name;
}
void Point::disp(){
	cout << name << " : " << x << ", " << y << "\n";
}