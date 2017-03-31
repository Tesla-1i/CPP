#include "Myarray.h"
#include "Averarray.h"
#include "Revarray.h"
#include "Safearray.h"
#include <iostream>

using namespace std;

Safearray::Safearray(int leng):Myarray(leng),Averarray(leng),Revarray(leng){
	cout<<"Safearray构造函数执行\n";
}

Safearray::~Safearray(){
	cout<<"Safearray析构函数执行\n";
}