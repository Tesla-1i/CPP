#include <iostream>
#include "Date.h"
#include"Person.h"

using namespace std;

Date::Date(int yr, int mh, int dy){
	year = yr;
	month = mh;
	day = dy;
}

Date::~Date(){
	cout << "执行Date的析构函数\n";
}