#include <iostream>
#include <cstring>
#include "2_6_1.h"

using namespace std;

String::String( const char *str){
	//���庯������Ҫ������дĬ��ֵ�ˣ�����ʱ�Ѿ�д��
	m_data = new char[strlen(str)+1];
	strcpy(m_data, str);
	cout<<"���캯��ִ�гɹ�\n";
}

String::String(const String &other){
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
	cout<<"��������ִ��\n";
}

String::~String(){
	delete[] m_data;
	cout<<"��������ִ�гɹ�\n";
}