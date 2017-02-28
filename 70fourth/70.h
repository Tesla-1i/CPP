//
// Created by asus on 2017/2/28.
//

#include <iostream>

class Point{
private:
    double x, y;
    char *name;
public:
    Point(char *n = NULL, double a = 0.0, double b = 0.0);
    ~Point();
    void disp();
};		//分号不可忘