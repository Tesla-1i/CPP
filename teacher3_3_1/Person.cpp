#include <iostream>
#include <cstring>
#include "Person.h"


using namespace std;
Person::Person(char *num, char *na, char *i, char se, int y, int m, int d):birthday(y, m, d){
	strcpy(number, num);
	strcpy(name, na);
	strcpy(id, i);
	sex = se;
}
	

Person::Person():birthday(2017, 1, 1){

}

Person::~Person(){
	cout<<"ִ��Person�Ĺ��캯��\n";
}

//��Ҫ��CPP�ļ���ʹ��inline���������ӱ��� error LINK2001
 void Person::setData(){
	cout<<"�������� ";
	cin>>number;
	cout<<"���������� ";
	cin>>name;
	cout<<"���������֤�� ";
	cin>>id;
	cout<<"�������������(�� �� ��)  ";
	int y, m, d;
	cin>>y>>m>>d;
	birthday.setDate(y, m, d);
	//cin>>birthday.getYear()>>birthday.getMonth()>>birthday.getDay();
	//cin>>year>>month>>day;
}

 void Person::getData(){
	cout<<"��� "<<number<<"\n";
	cout<<"���� "<<name<<"\n";
	cout<<"���֤�� "<<id<<"\n";
	cout<<"�������� "<<birthday.getYear()<<"�� "<<birthday.getMonth()<<"�� "<<birthday.getDay()<<"��\n";
}