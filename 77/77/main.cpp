#include<iostream>
#include<cstring>
#include"77h.h"

using namespace std;
extern Point test();		//ȫ�ֺ�������,	�ǳ���Ҫ

int main(){
	Point p1("home", 1.0, 3.0);
	p1 = test();
	return 0;
}

