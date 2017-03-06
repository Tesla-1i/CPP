#include<iostream>
#include<cstring>
#include"102h1.h"
#include"102h2.h"

using namespace std;

Son::Son(Father *p, char *n, int m){
	father = p;
	strcpy_s(name, n);
	money = m;
}

Father *Son::getFather(){
	return father;
}
char *Son::getName(){
	return name;
}

void Son::receive(int m){
	if (m > 0)
		money += m;
}

void Son::print(){
	cout << "儿子: " << name << " 儿子资金: " << money << "\n";
}