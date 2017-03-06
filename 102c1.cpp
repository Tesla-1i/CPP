#include<iostream>
#include<cstring>
#include"102h1.h"
#include"102h2.h"

using namespace std;

Father::Father(char *n, int m){
	strcpy_s(name, n);
	money = m;
}

char * Father::getName(){
	return name;
}

void Father::receive(int m){
	if (m > 0)
		money += m;
}

void Father::print(){
	cout << "¸¸Ç×Ãû×Ö: " << name << " ¸¸Ç××Ê²ú: " << money<<"\n";
}

int Father::manage(Son *role, int m){
	if (strcmp(role->getFather()->getName(), name) == 0)
		return pay(m);
	else
		return 0;
}

int Father::pay(int m){
	//cout << "pay finshed\n";
	if (m < 0)
		return 0;
	if (money >= m){
		money -= m;
		return m;
	}
	else
		return 0;
}