#include <iostream>
#include "Revarray.h"
#include "Myarray.h"

using namespace std;

Revarray::Revarray(int leng):Myarray(leng){
	cout<<"Revarray构造函数执行\n";
}

Revarray::~Revarray(){
	cout<<"Revarray析构函数执行\n";
}

void Revarray::revArray(){
	int length = getLength();
	int *list = getAlist();
	int temp;
	for(int i = 0; i < (length/2); i++){
		temp = list[i];
		list[i] = list[length-1-i];
	}
	cout<<"反序输出\n";
	for(int j = 0; j < length; j++){
		cout<<list[j]<<" ";
	}
	cout<<"\n";
}