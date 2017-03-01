#include<iostream>
#include<cstring>
#include"73h.h"

using namespace std;

int main(){
	Point point1("home", 1.0, 2.0);
	Point point2("school", 3.0);
	Point point3;
	Point point4 = point1;
	cout << "point1 = ";
	point1.disp();
	cout << "point2 = ";
	point2.disp();
	cout << "point3 = ";
	point3.disp();
	cout << "point4 = ";
	point4.disp();
	return 0;
}