#include <iostream>
#include <cstring>
#include "Myarray.h"
#include "Averarray.h"
#include "Revarray.h"
#include "Safearray.h"

using namespace std;

int main(){
	cout<<"请输入要计算的数字的个数\n";
	int i;
	cin>>i;
	Myarray myarray1(i);
	myarray1.input();
	myarray1.display();
	//cout<<"拷贝数组的信息\n";
	//Myarray析构函数时，有拷贝构造时会有问题
	//Myarray myarray2(myarray1);
	//myarray2.display();
	cout<<"-----------------------------\n";
	Averarray averarray1(i);
	cout<<"Averarray数字个数与Myarray一致\n";
	averarray1.input();
	averarray1.setAverage();
	averarray1.getAverage();
	cout<<"------------------------------\n";
	Revarray revarray1(i);
	cout<<"Revarray数字个数与Myarray一致\n";
	revarray1.input();
	revarray1.revArray();
	cout<<"------------------------------\n";
	Safearray safearray1(i);
	cout<<"Safearray数字个数与Myarray一致\n";
	safearray1.input();
	safearray1.display();
	cout<<"------------------------------\n";
	return 0;
}