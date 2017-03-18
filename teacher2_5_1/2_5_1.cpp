#include <iostream>
#include "2_5_1.h"

using namespace std;

Point::Point(){
	intPoint = new int[10];
	cout<<"执行构造函数\n";
}

Point::~Point(){
	delete [] intPoint;
	cout<<"执行析构函数\n";
}

void Point::setNum(){
	cout<<"请输入10个整数:\n";
	for(int i = 0; i < 10; i++){
		cin>>intPoint[i];
	}
}

void Point::print(){
	cout<<"输出数值:\n";
	for(int i = 0; i < 10; i++){
		cout<<intPoint[i]<<" ";
	}
}
