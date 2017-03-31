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
	cout << "Student��������ִ��\n";
}

void Student::show(){
	Person::show();
	printf("������%s �༶��%s ", name, Class);
	cout << " ѧ�ţ�" << id << " �ɼ���" << grade <<"\n";

}