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
	//��ΪRectangle��һ���������죬����PointҲ���п�������
	double getX();
	double getY();
};

#endif