#include<iostream>

class Point{
private:
	double x, y;	//зјБъ
	char *name;
public:
	Point(char *n = NULL, double a = 0.0, double b = 0.0);
	Point(Point &p);
	~Point();
	void disp();
};