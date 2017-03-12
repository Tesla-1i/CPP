#include<iostream>
#include<cstring>
#include"77h.h"

using namespace std;
extern Point test();		//全局函数声明,	非常重要

int main(){
	Point p1("home", 1.0, 3.0);
	p1 = test();
	return 0;
}

