#include "Myarray.h"
#include "Averarray.h"
#include "Revarray.h"
#include "Safearray.h"
#include <iostream>

using namespace std;

Safearray::Safearray(int leng):Myarray(leng),Averarray(leng),Revarray(leng){
	cout<<"Safearray���캯��ִ��\n";
}

Safearray::~Safearray(){
	cout<<"Safearray��������ִ��\n";
}