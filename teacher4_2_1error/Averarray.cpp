#include <iostream>
#include "Averarray.h"
#include "Myarray.h"
#include "Revarray.h"

using namespace std;

//Myarray myarray1;

Averarray::Averarray(int leng):Myarray(leng){
	cout<<"Averarray构造函数执行\n";
	cout<<"Averarray数字个数与Myarray一致\n";
}

Averarray::~Averarray(){
	cout<<"Averarray析构函数执行\n";
	//cout<<"AverarrayÊý×Ö¸öÊýÓëMyarrayÒ»ÖÂ\n";
}

void Averarray::setAverage(){
	//cout<<"Êý×Ö¸öÊýÓëMyarrayÒ»ÖÂ\n";
	int length = getLength();
	int *list = getAlist();
	int sum = 0;	//sum³õÊ¼»¯
	for(int i = 0; i < length; i++){
		sum += list[i];
	}
	//average = sum/length;
	average = (float)(sum)/length;

}

void Averarray::getAverage(){
	cout<<""<<average<<"\n";
}