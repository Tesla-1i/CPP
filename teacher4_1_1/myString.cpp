#include <iostream>
#include "myString.h"
#include <cstring>
//仅用于拷贝构造

using namespace std;

myString::myString(char *m){
	pStr = m;
	cout<<"myString构造函数执行\n";
}

myString::myString(const myString& mS){
	pStr = new char[strlen(mS.pStr)+1];
	strcpy(pStr, mS.pStr);
	cout<<"拷贝构造成功\n";
}

myString::~myString(){
	delete [] pStr;
	cout<<"myString析构函数执行\n";
}

void myString::set(char *m){
	//pStr = m;
	pStr = new char[strlen(m)+1];
	strcpy(pStr, m);
}

void myString::print(){
	cout<<"字符串内容是："<<pStr<<"\n";
}