#include "Point.h"

Point::Point(double x1, double y1){
	x = x1;
	y = y1;
}

double Point::getX(){
	return x;
}
double Point::getY(){
	return y;
}

Point::Point(Point &P){
	x = P.getX();
	y = P.getY();
}