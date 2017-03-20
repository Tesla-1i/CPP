#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

Persion::~Person(){
	cout<<"执行Person的构造函数\n";
}

inline void Person::setData(){
	cout<<"请输入编号 ";
	cin>>number;
	cout<<"请输入姓名 ";
	cin>>name;
	cout<<"请输入身份证号 ";
	cin>>id;
	//cout<<"请输入出生日期(年 月 日)  ";
	//cin>>year>>month>>day;
}

inline void Person::getData(){
	cout<<"编号 "<<number<<"\n";
	cout<<"姓名 "<<name<<"\n";
	cout<<"身份证号 "<<id<<"\n";
	cout<<"出生日期 "<<year<<"年 "<<month<<"月 "<<day<<"日\n";
}