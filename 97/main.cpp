#include <iostream>
#include <cmath>
#include "97h2.h"
#include "97h1.h"

using namespace std;

class Point{
private:
    double x, y;
public:
    Point(double x = 0.0, double y = 0.0);
    void disp();
    double distance(Line l);
};

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point::disp() {
    cout<<"点"<<" "<<x<<" , "<<y<<endl;
}

double Point::distance(Line l) {
    return fabs(l.a*x + l.b*y + l.c)/sqrt(l.a*l.a + l.b*l.b);
}

class Line{
private:
    double a, b, c;
public:
    Line(double a = 0.0, double b = 0.0, double c = 0.0);
    void disp();
    friend double Point::distance(Line l);
};

Line::Line(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void Line::disp() {
    cout<<"线 ("<<a<<"x + "<<b<<"y +"<<c<<" = 0"<<endl;
}


int main(){

    Point p1(1.0, 2.0);
    Line l1(3.0, 4.0, 5.0);
    p1.disp();
    l1.disp();
    cout<<"距离是 "<<p1.distance(l1)<<endl;
    return 0;
}

