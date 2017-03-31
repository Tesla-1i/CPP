#include <iostream>
#include <cstring>
#include "Myarray.h"

using namespace std;

Myarray::Myarray(int leng){
	length = leng;
	alist = new int[length];
	cout<<"Myarray构造函数执行\n";
}

Myarray::Myarray(const Myarray& m){
	//length = m.getLength();
	length = m.length;
	alist = new int[length];
	alist = m.alist;
	//alist = m.getAlist();
	//srtcpy(alist, m.getAlist());
	cout<<"Myarray拷贝构造执行\n";
}

Myarray::~Myarray(){
	delete [] alist;
	cout<<"Myarray析构函数执行\n";
}

int Myarray::getLength(){
	return length;
}

int *Myarray::getAlist(){
	return alist;
}

void Myarray::input(){
	cout<<"请输入数字:\n";
	for(int i = 0; i < length; i++){
		cin>>alist[i];
	}
	cout<<"输入结束\n";
}

void Myarray::display(){
	cout<<"输出数字：\n";
	for(int i = 0; i < length; i++){
		cout<<alist[i]<<" ";
	}
	cout<<"\n输出结束\n";
}