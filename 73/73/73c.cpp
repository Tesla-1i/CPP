#include<iostream>
#include<cstring>
#include"73h.h"

using namespace std;

Point::Point(char *n, double a, double b){
	x = a;
	y = b;
	if (n){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else
	{
		name = new char[8];
		strcpy(name, "no name");
	}
	cout << name << "����\n";
}

Point::Point(Point &p){
	x = p.x;
	y = p.y;
	if (p.name){
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
	else{
		name = new char[8];
		strcpy(name, "no name");
	}
	cout << name << "�������\n";
}

Point::~Point(){
	cout << name << "�������\n";
}

void Point::disp(){
	cout << name << ":" << x << ", " << y << "\n";
}