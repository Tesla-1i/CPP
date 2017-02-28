//
// Created by asus on 2017/2/27.
//

#include <iostream>
#include <cstring>
#include "700.h"
using namespace std;

class Point{
private:
	double x, y;
	char *name;
public:
	Point(char *n = NULL, double a = 0.0, double b = 0.0);
	~Point();
	void disp();
};	

Point::Point(char *n, double a, double b){
	x = a;
	y = b;
	if(n){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else{
		name = new char[8];
		strcpy(name, "no name");
	}
	cout<<name<<" constructing"<<"\n";
}
Point::~Point(){
	cout<<name<<" distructing\n";
	delete [] name;
}
void Point::disp(){
	cout<<name<<" : "<<x<<", "<<y<<"\n";
}

int main()
{
    //cout << "Hello world!" << endl;
    Point p1("home", 1.0, 2.0);
    Point p2("school", 3.0);
    Point p3;
    cout<<"p1 = ";
    p1.disp();
    cout<<"p2 = ";
    p2.disp();
    cout<<"p3 = ";
    p3.disp();

    return 0;
}