#include <iostream>
#include "2_4_2.h"
using namespace std;

Rational::Rational(int mm, int nn){
	m = mm; n = nn;
}

Rational::Rational(Rational &A){
	m = A.getM();
	n = A.getN();
}

int Rational::getM(){
	return m;
}

int Rational::getN(){
	return n;
}

Rational Rational::R_add(Rational &A){
	int m1, n1, n2, m2;
	n2 = A.getN();
	m2 = A.getM();
	m1 = m * m2;
	n1 = n * m2 + n2 * m;
	cout << m1 << " " << n1 << endl;
	Rational reational4(m1, n1);
	cout << reational4.getM() << endl;
	return reational4;
}

Rational Rational::R_sub(Rational &A){
	int m1, n1, n2, m2;
	n2 = A.getN();
	m2 = A.getM();
	m1 = m * m2;
	n1 = n * m2 - n2 * m;
	Rational reational(m1, n1);
	return reational;
}

void Rational::R_mul(Rational &A){
	int m1, n1, n2, m2;
	n2 = A.getN();
	m2 = A.getM();
	m1 = m * m2;
	n1 = n * n2;

	int temp = m1;
	int n3 = n1, m3 = m1;
	//求最大公约数
	while (temp != 0){
		temp = n1 % m1;
		n1 = m1;
		m1 = temp;
	}
	int gcd = n1;
	m1 = m3 / gcd;
	n1 = n3 / gcd;
	cout << "结果是: " << n1 << "/" << m1 << endl;
}

void Rational::R_div(Rational &A, Rational &B){
	int m1, m2, n1, n2;
	m1 = A.getM(); m2 = B.getM();
	n1 = A.getN(); n2 = B.getN();
	m = m1 * n2;
	n = n1 * m2;
}

void Rational::print(){
	cout << "结果是: " << n << "/" << m << endl;
}

void Rational::simple(){
	int temp = m;
	int n1 = n, m1 = m;
	//求最大公约数
	while (temp != 0){
		temp = n % m;
		n = m;
		m = temp;
	}
	int gcd = n;
	m = m1 / gcd;
	n = n1 / gcd;
	cout << n << " " << m << "\n";
}