#include<iostream>
#include"Person.h"

using namespace std;

Person::Person(int i){
	id = i;
	cout << "Person���캯��ִ��\n";
}

Person::~Person(){
	cout << "Person��������ִ��\n";
}

void Person::show(){
	cout << "���֤��" << id << endl;
}