#include <iostream>
#include <cstring>
#include "Myarray.h"

using namespace std;

Myarray::Myarray(int leng){
	length = leng;
	alist = new int[length];
	cout<<"Myarray���캯��ִ��\n";
}

Myarray::Myarray(const Myarray& m){
	//length = m.getLength();
	length = m.length;
	alist = new int[length];
	alist = m.alist;
	//alist = m.getAlist();
	//srtcpy(alist, m.getAlist());
	cout<<"Myarray��������ִ��\n";
}

Myarray::~Myarray(){
	delete [] alist;
	cout<<"Myarray��������ִ��\n";
}

int Myarray::getLength(){
	return length;
}

int *Myarray::getAlist(){
	return alist;
}

void Myarray::input(){
	cout<<"����������:\n";
	for(int i = 0; i < length; i++){
		cin>>alist[i];
	}
	cout<<"�������\n";
}

void Myarray::display(){
	cout<<"������֣�\n";
	for(int i = 0; i < length; i++){
		cout<<alist[i]<<" ";
	}
	cout<<"\n�������\n";
}