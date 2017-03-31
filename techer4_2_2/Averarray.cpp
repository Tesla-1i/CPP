#include <iostream>
#include "Averarray.h"
#include "Myarray.h"

using namespace std;

Averarray::Averarray(int leng):Myarray(leng){
	cout<<"Averarray构造函数执行\n";
	//cout<<"Averarray数字个数与Myarray一致\n";
}

Averarray::~Averarray(){
	cout<<"Averarray析构函数执行\n";
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
	printf("平均值是 %.2f\n",average );
}