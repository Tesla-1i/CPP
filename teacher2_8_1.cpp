#include <iostream>
using namespace std;

class Point
{
public:
	Point(int a, int b);
	void fun(Point &p);
	void fun(Point *p);
private:
	int x, y;
};

Point::Point(int a, int b){
	x = a; y = b;
}

void Point::fun(Point &p){
	x = p.x; y = p.y;
	cout<<"The fun(Point &p)"<<endl;
}

void Point::fun(Point *p){
	x = p->x; y = p->y;
	cout<<"fun(Point *p)"<<endl;
}

int main()
{	
	Point p(1, 2), q(3, 4);
	p.fun(q);
	q.fun(&p);
	return 0;
}