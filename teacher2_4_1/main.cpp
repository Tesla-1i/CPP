#include <iostream>
#include "2_4_1.h"
using namespace std;

int main(){
	int m1, n1, m2, n2;
	cout<<"请分别输入第一个分数的分子，分母: \n";
	cin>>n1>>m1;
	if(m1 == 0){
		cout<<"error\n";
		return 1;
	}
	Rational Rational1(m1, n1);
	cout<<"请分别输入第二个分数的分子，分母\n";
	cin>>n2>>m2;
	if(m2 = 0){
		cout<<"error\n";
		return 1;
	}
	Rational Rational2(m2, n2);
	Rational Rational3 = Rational1.R_add(Rational2);
	Rational3.simple();
	cout<<"相加得: "<<endl;
	Rational3.print();
	return 0;
}