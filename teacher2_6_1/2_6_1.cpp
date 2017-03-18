#include <iostream>
#include <cstring>
#include "2_6_1.h"

using namespace std;

String::String( const char *str){
	//定义函数，不要给参数写默认值了，声明时已经写了
	m_data = new char[strlen(str)+1];
	strcpy(m_data, str);
	cout<<"构造函数执行成功\n";
}

String::String(const String &other){
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
	cout<<"拷贝构造执行\n";
}

String::~String(){
	delete[] m_data;
	cout<<"析构函数执行成功\n";
}