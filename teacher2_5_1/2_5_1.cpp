#include <iostream>
#include "2_5_1.h"

using namespace std;

Point::Point(){
	intPoint = new int[10];
	cout<<"ִ�й��캯��\n";
}

Point::~Point(){
	delete [] intPoint;
	cout<<"ִ����������\n";
}

void Point::setNum(){
	cout<<"������10������:\n";
	for(int i = 0; i < 10; i++){
		cin>>intPoint[i];
	}
}

void Point::print(){
	cout<<"�����ֵ:\n";
	for(int i = 0; i < 10; i++){
		cout<<intPoint[i]<<" ";
	}
}
