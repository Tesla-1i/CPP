#include <iostream>
#include "2_7_1.h"

using namespace std;

Array::Array(){
	for(int i = 0; i < 10; i++){
		array[i] = 0;
	}
	cout<<"成功执行构造函数\n";
}

void Array::input(){
	cout<<"请输入10个整数\n";
	for(int i = 0; i < 10; i++){
		cin>>array[i];
	}
}

int &Array::getData(int i){
	return array[i];
}

void Array::print(){
	int j;
	cout<<"输出数值\n";
	for(int i = 0; i < 10; i++){
		j = getData(i);
		cout<<j<<"\t";
	}
}