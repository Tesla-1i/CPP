#include <iostream>
#include "2_3_1.h"

using namespace std;

complex::complex(double r, double i){
	real = r; image = i;
}

void complex::show(double r, double i){
	if(i < 1E-5){
		cout<<"输出: "<<r<<i<<"i\n";
	}
	else{
		cout<<"输出: "<<r<<"+"<<i<<"i\n";
	}
}

void complex::set(double r, double i){
	real = r, image = i;
}

double complex::getReal(){
	return real;
}

double complex::getImage(){
	return image;
}

void complex::jia(double r, double i){
	double r1, i1;
	r1 = real + r;
	i1 = image + i;
	show(r1, i1);
}

void complex::jian(double r, double i){
	double r1, i1;
	r1 = real - r;
	i1 = image - i;
	show(r1, i1);
}

void complex::cheng(double r, double i){
	double r1, i1;
	r1 = real * r - image * i;
	i1 = real * i + image * r;
	show(r1, i1);
}

void complex::chu(double r, double i){
	double r1, i1;
	r1 = (real * r + image * i)/(r*r + i*i);
	i1 = (image * r - real * i)/(r * r + i * i);
	//show(r1, i1);
	if(i1 < 1E-5){
		//cout<<"输出: "<<r<<i<<"i\n";
		printf("输出: %.2f %.2fi\n",r1,i1);
	}
	else{
		printf("输出: %.2f + %.2fi\n",r1, i1);
		//cout<<"输出: "<<r<<"+"<<i<<"i\n";
	}
}