#include <iostream>
#include <cmath>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

int main(){
	Rectangle rectangle1;
	cout<<"�޲ι���ľ������\n";
	rectangle1.calArea();
	cout<<"������ڶ������ε���������\n";
	double x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	Rectangle rectangle2(x1, y1, x2, y2);
	cout<<"�вι���ľ������\n";
	rectangle2.calArea();
	Rectangle rectangle3(rectangle2);
	cout<<"��������ľ������\n";
	rectangle3.calArea();
	return 0;
}