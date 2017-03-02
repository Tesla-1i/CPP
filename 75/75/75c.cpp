#include<iostream>
#include<string.h>
#include"75h.h"

using namespace std;

Point::Point(char *n, double a, double b){
	x = a; y = b;
	flag = 1;
	if (n){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else{
		name = new char[8];
		strcpy(name, "no name");
	}
	cout << name << "constructing\n";
}
Point::Point(Point &p){
	x = p.x;
	y = p.y;
	name = p.name;
	flag = 0;
	cout << name << "copy constructing\n";
}
Point::~Point(){
	cout << name << "destructing\n";
	if (flag){
		delete[] name;
	}
}

void Point::disp(){
	cout << name << "x: " << x << ", " << y << "\n";
}