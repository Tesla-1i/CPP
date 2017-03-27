#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

int main(){
	cout<<"初始化三个人的信息\n";
	Person per[3] = {Person("1","zhangsan","11",'f',2016,1,1),
Person("2","lisi","22",'m',2016, 2, 2), Person("3","wangwu","33",'m',2016,3, 3)};

	for(int i = 0; i < 3; i++){
		cout<<"输出人员的详细信息\n";
		per[i].getData();
	}
	cout<<"------------------------\n";
	cout<<"修改信息\n";
for(int j = 0; j < 3; j++){
		cout<<"请输入具体信息\n";
		per[j].setData(); 
	}
	cout<<"-----------------------\n";
	for(int k = 0; k < 3; k++){
		cout<<"输出人员的详细信息\n";
		per[k].getData();
	}
	cout<<"------------------------\n";
	//delete [] per;
	return 0;

}


/*int main(){
	int i = 0;
	cout<<"输入人员信息，首先输入人员个数\n";
	cin>>i;
	//Person per[i];
	Person *per = new Person[i];
	for(int j = 0; j < i; j++){
		cout<<"请输入具体信息\n";
		per[j].setData(); 
	}
	cout<<"-----------------------\n";
	for(int k = 0; k < i; k++){
		cout<<"输出人员的详细信息\n";
		per[k].getData();
	}
	cout<<"------------------------\n";
	delete [] per;
	return 0;
}*/
