#include<iostream>
#include<cstring>
#include"77h.h"

using namespace std;

Point::Point(char *n, double a, double b){
	x = a; y = b;
	if (n){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else{
		name = new char[8];
		strcpy(name, "no name");
	}
}

Point::Point(Point &p){		//构造函数必须传引用
	x = p.x; y = p.y;
	if (p.name){
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
	else{
		name = new char[8];
		strcpy(name, "no name");
	}
}

Point::~Point(){
	cout << name << " : 销毁\n";
	delete[] name;
}

void Point::disp(){
	cout << x << " , " << y<<endl ;
}

Point test(){
	Point p("family", 2.0, 4.0);
	return p;
}