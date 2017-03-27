#ifndef DS_S_S
#define DS_S_S

class Point
{
private:
	double x;
	double y;
public:
	Point(double x1, double y1);	
	Point(Point &P);
	//因为Rectangle有一个拷贝构造，所以Point也得有拷贝构造
	double getX();
	double getY();
};

#endif