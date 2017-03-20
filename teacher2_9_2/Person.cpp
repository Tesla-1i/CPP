#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

Persion::~Person(){
	cout<<"执行Person的构造函数\n";
}

Person::Person(char *nr = "0", char *ne = "name", char *id1  = "0", char sx = 'm', int y, int m, int d):birthday(y, m, d){
	strcpy(number, nr);
	strcpy(name, ne);
	strcpy(id, id1);
	sex = sx;
}

/*inline void Person::setData(){
	cout<<"请输入编号 ";
	cin>>number;
	cout<<"请输入姓名 ";
	cin>>name;
	cout<<"请输入身份证号 ";
	cin>>id;
	//cout<<"请输入出生日期(年 月 日)  ";
	//cin>>year>>month>>day;
}*/

inline void Person::getData(){
	cout<<"编号 "<<number<<"\n";
	cout<<"姓名 "<<name<<"\n";
	cout<<"身份证号 "<<id<<"\n";
	cout<<"性别 "<<sex<<"\n";
	cout<<"出生日期 "<<birthday.year<<"年 "<<birthday.month<<"月 "<<birthday.day<<"日\n";
}