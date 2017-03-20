#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

int main(){

	char *num = 0, *name = 0, *id = 0, sex;
	cout << "请输入编号 ";
	cin >> num;
	cout << "请输入名字 ";
	cin >> name;
	cout << "请输入身份证号 ";
	cin >> id;
	cout << "请输入性别（男m，女f）";
	cin >> sex;
	int y, m, d;
	cout << "请输入出生日期（年 月 日）";
	cin >> y >> m >> d;
	Person person1(num, name, id, sex, y, m, d);
	cout << "输出人员的详细信息 \n";
	person1.getData();
	/*int i = 0;
	cout<<"输入人员信息，首先输入人员个数\n";
	cin>>i;
	Person per[i];
	for(int j = 0; j < i; j++){
	cout<<"请输入编号"

	}
	for(int k = 0; k < i; k++){
	cout<<"输出人员的详细信息\n";
	per[k].getData();
	}*/
	return 0;
}
