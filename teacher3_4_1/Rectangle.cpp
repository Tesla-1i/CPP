#include <iostream>
#include <cmath>
#include "Rectangle.h"
//#include "Point.h"

using namespace std;

Rectangle::Rectangle():point1(0, 0),point2(0, 0){
	cout<<"无参构造成功\n";
}

Rectangle::Rectangle(double x1, double y1, double x2, double y2):point1(x1, y1),point2(x2, y2){
	cout<<"有参构造成功\n";
}

Point Rectangle::getP1(){
	return point1;
}

Point Rectangle::getP2(){
	return point2;
}

Rectangle::Rectangle(Rectangle &R):point1(R.getP1()),point2(R.getP2()){
	cout<<"拷贝构造成功\n";
}

void Rectangle::calArea(){
	double x, y;
	x = fabs(getP1().getX() - getP2().getX());
	y = fabs(getP1().getY() - getP2().getY());
	double area = x * y;
	cout<<"area = "<<area<<"\n";
}


