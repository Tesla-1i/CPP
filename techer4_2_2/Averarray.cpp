#include <iostream>
#include "Averarray.h"
#include "Myarray.h"

using namespace std;

Averarray::Averarray(int leng):Myarray(leng){
	cout<<"Averarray���캯��ִ��\n";
	//cout<<"Averarray���ָ�����Myarrayһ��\n";
}

Averarray::~Averarray(){
	cout<<"Averarray��������ִ��\n";
}

void Averarray::setAverage(){
	int length = getLength();
	int *list = getAlist();
	int sum = 0;
	for(int i = 0; i < length; i++){
		sum += list[i];
	}
	average = (float)(sum)/length;
}

void Averarray::getAverage(){
	printf("ƽ��ֵ�� %.2f\n",average );
}