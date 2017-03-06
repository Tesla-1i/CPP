#include<iostream>
#include<cstring>
#include"102h1.h"
#include"102h2.h"

using namespace std;

int main(){
	Father f1("李四", 10000);
	Son s1(&f1, "李小四", 100);
	s1.receive(f1.manage(&s1, 200));
	s1.print();
	f1.print();
	return 0;
}