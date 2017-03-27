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
	cout<<"执行Person的构造函数\n";
}

//不要在CPP文件里使用inline，否则连接报错 error LINK2001
 void Person::setData(){
	cout<<"请输入编号 ";
	cin>>number;
	cout<<"请输入姓名 ";
	cin>>name;
	cout<<"请输入身份证号 ";
	cin>>id;
	cout<<"请输入出生日期(年 月 日)  ";
	int y, m, d;
	cin>>y>>m>>d;
	birthday.setDate(y, m, d);
	//cin>>birthday.getYear()>>birthday.getMonth()>>birthday.getDay();
	//cin>>year>>month>>day;
}

 void Person::getData(){
	cout<<"编号 "<<number<<"\n";
	cout<<"姓名 "<<name<<"\n";
	cout<<"身份证号 "<<id<<"\n";
	cout<<"出生日期 "<<birthday.getYear()<<"年 "<<birthday.getMonth()<<"月 "<<birthday.getDay()<<"日\n";
}