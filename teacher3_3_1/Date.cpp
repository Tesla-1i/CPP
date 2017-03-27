#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int yr, int mh, int dy){
	year = yr;
	month = mh;
	day = dy;
}

Date::~Date(){
	cout<<"执行Date的析构函数\n";
}

void Date::setDate(int y, int m, int d){
	year = y;
	month = m;
	day = d;
}

int Date::getYear(){
	return year;
}

int Date::getMonth(){
	return month;
}

int Date::getDay(){
	return day;
}