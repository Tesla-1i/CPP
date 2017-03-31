#include<iostream>
#include<cstring>
#include"Person.h"
#include"Student.h"

using namespace std;

Student::Student(int iP, int iS, char *n, int g, int* C) :Person(iP)
{
	name = new char[strlen(n) + 1];
	id = iS;
	
	//name = n;
	grade = g;
	Class = new int[strlen(C) + 1];
	//Class = C;
}

Student::~Student()
{
	delete[] name;
	delete[] Class;
	cout << "Student析构函数执行\n";
}

void Student::show(){
	Person::show();
	printf("姓名：%s 班级：%s ", name, Class);
	cout << " 学号：" << id << " 成绩：" << grade <<"\n";

}