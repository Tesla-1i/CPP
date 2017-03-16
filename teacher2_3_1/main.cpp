#include <iostream>
#include "2_3_1.h"
using namespace std;

int main(){
	double r1, i1;
	cout<<"请输入第一个复数的实部与虚部:\n";
	cin>>r1>>i1;
	complex complex1(r1, i1);
	cout<<"请输入第二个复数的实部与虚部\n";
	double r2, i2;
	cin>>r2>>i2;
	complex complex2(r2, i2);
	double r3, i3;
	r3 = complex2.getReal();
	i3 = complex2.getImage();
	cout<<"两复数相加:\n";
	complex1.jia(r3, i3);
	cout<<"两复数相减:\n";
	complex1.jian(r3, i3);
	cout<<"两复数相乘:\n";
	complex1.cheng(r3, i3);
	cout<<"两复数相除:\n";
	complex1.chu(r3, i3);
	return 0;
}