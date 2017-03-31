#include<iostream>
#include"Person.h"

using namespace std;

Person::Person(int i){
	id = i;
	cout << "Person构造函数执行\n";
}

Person::~Person(){
	cout << "Person析构函数执行\n";
}

void Person::show(){
	cout << "身份证：" << id << endl;
}