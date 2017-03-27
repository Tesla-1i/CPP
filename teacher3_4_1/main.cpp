#include <iostream>
#include <cmath>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

int main(){
	Rectangle rectangle1;
	cout<<"无参构造的矩形面积\n";
	rectangle1.calArea();
	cout<<"请输入第二个矩形的两点坐标\n";
	double x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	Rectangle rectangle2(x1, y1, x2, y2);
	cout<<"有参构造的矩形面积\n";
	rectangle2.calArea();
	Rectangle rectangle3(rectangle2);
	cout<<"拷贝构造的矩形面积\n";
	rectangle3.calArea();
	return 0;
}