#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

Persion::~Person(){
	cout<<"ִ��Person�Ĺ��캯��\n";
}

inline void Person::setData(){
	cout<<"�������� ";
	cin>>number;
	cout<<"���������� ";
	cin>>name;
	cout<<"���������֤�� ";
	cin>>id;
	//cout<<"�������������(�� �� ��)  ";
	//cin>>year>>month>>day;
}

inline void Person::getData(){
	cout<<"��� "<<number<<"\n";
	cout<<"���� "<<name<<"\n";
	cout<<"���֤�� "<<id<<"\n";
	cout<<"�������� "<<year<<"�� "<<month<<"�� "<<day<<"��\n";
}