#include <iostream>
#include <cstring>
#include "Myarray.h"
#include "Averarray.h"
#include "Revarray.h"
#include "Safearray.h"

using namespace std;

int main(){
	cout<<"������Ҫ��������ֵĸ���\n";
	int i;
	cin>>i;
	Myarray myarray1(i);
	myarray1.input();
	myarray1.display();
	//cout<<"�����������Ϣ\n";
	//Myarray��������ʱ���п�������ʱ��������
	//Myarray myarray2(myarray1);
	//myarray2.display();
	cout<<"-----------------------------\n";
	Averarray averarray1(i);
	cout<<"Averarray���ָ�����Myarrayһ��\n";
	averarray1.input();
	averarray1.setAverage();
	averarray1.getAverage();
	cout<<"------------------------------\n";
	Revarray revarray1(i);
	cout<<"Revarray���ָ�����Myarrayһ��\n";
	revarray1.input();
	revarray1.revArray();
	cout<<"------------------------------\n";
	Safearray safearray1(i);
	cout<<"Safearray���ָ�����Myarrayһ��\n";
	safearray1.input();
	safearray1.display();
	cout<<"------------------------------\n";
	return 0;
}