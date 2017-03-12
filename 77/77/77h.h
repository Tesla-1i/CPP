#include<iostream>

using namespace std;
class Point{
private:
	double x, y;
	char *name;
public:
	Point(char *n = NULL, double a = 0.0, double b = 0.0);
	Point(Point &p);
	~Point();
	void disp();
};