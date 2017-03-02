#include <iostream>
#include <cstring>
#include "70.h"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    Point p1("home", 1.0, 2.0);
    Point p2("school", 3.0);
    Point p3;
    cout<<"p1 = ";
    p1.disp();
    cout<<"p2 = ";
    p2.disp();
    cout<<"p3 = ";
    p3.disp();

    return 0;
}
