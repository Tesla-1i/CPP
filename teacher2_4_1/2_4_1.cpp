#include <iostream>
#include "2_4_1.h"
using namespace std;

Rational::Rational(int mm, int nn){
	m = mm; n = nn;
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
	Rational reational(m1, n1);
	return reational;
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
}

void Rational::R_div(Rational &A, Rational &B){
	int m1, m2, n1, n2;
	m1 = A.getM(); m2 = B.getM();
	n1 = A.getN(); n2 = B.getN();
	m = m1 * n2;
	n = n1 * m2;	
}

void Rational::print(){
	cout<<"½á¹ûÊÇ: "<<n<<"/"<<m<<endl;
}

void Rational::simple(){
	int temp = m;
	int n1 = n, m1 = m;
	while(temp != 0){
		temp = n % m;
		n = m;
		m = temp;
	}
	int gcd = n;
	m = m1 / gcd;
	n = n1 / gcd;
}