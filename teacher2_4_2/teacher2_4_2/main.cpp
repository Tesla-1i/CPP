#include <iostream>
#include "2_4_2.h"
using namespace std;

int main(){
	int m1, n1, m2, n2;
	cout << "��ֱ������һ�������ķ��ӣ���ĸ: \n";
	cin >> n1 >> m1;
	Rational Rational5(m1, n1);
	cout << Rational5.getM() << "n\n";
	if (m1 == 0){
		cout << "error\n";
		return 1;
	}
	Rational Rational1(m1, n1);
	cout << "��ֱ�����ڶ��������ķ��ӣ���ĸ\n";
	cin >> n2 >> m2;
	if (m2 == 0){
		cout << "error\n";
		return 1;
	}
	Rational Rational2(m2, n2);
	cout << Rational2.getM() << "m \n";
	Rational Rational3 = Rational1.R_add(Rational2);
	Rational3.simple();
	cout << "��ӵ�: " << endl;
	Rational3.print();
	/*Rational3 = Rational1.R_sub(Rational2);
	Rational3.simple();
	cout<<"����ã�"<<endl;
	Rational3.print();
	Rational1.R_mul(Rational2);
	Rational3.R_div(Rational1, Rational2);
	Rational3.simple();
	Rational3.print();*/
	return 0;
}