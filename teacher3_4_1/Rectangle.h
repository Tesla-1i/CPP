//class Point;
#include"Point.h"

#ifndef DC_C_C
#define DC_C_C

class Rectangle
{
private:
	Point point1;
	Point point2;
public:
	Rectangle();
	Rectangle(double x1, double y1, double x2, double y2);
	Rectangle(Rectangle &R);
	Point getP1();
	Point getP2();
	void calArea();
};

#endif