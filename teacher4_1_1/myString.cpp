#include <iostream>
#include "myString.h"
#include <cstring>
//�����ڿ�������

using namespace std;

myString::myString(char *m){
	pStr = m;
	cout<<"myString���캯��ִ��\n";
}

myString::myString(const myString& mS){
	pStr = new char[strlen(mS.pStr)+1];
	strcpy(pStr, mS.pStr);
	cout<<"��������ɹ�\n";
}

myString::~myString(){
	delete [] pStr;
	cout<<"myString��������ִ��\n";
}

void myString::set(char *m){
	//pStr = m;
	pStr = new char[strlen(m)+1];
	strcpy(pStr, m);
}

void myString::print(){
	cout<<"�ַ��������ǣ�"<<pStr<<"\n";
}