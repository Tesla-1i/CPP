#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

int main(){
	cout<<"��ʼ�������˵���Ϣ\n";
	Person per[3] = {Person("1","zhangsan","11",'f',2016,1,1),
Person("2","lisi","22",'m',2016, 2, 2), Person("3","wangwu","33",'m',2016,3, 3)};

	for(int i = 0; i < 3; i++){
		cout<<"�����Ա����ϸ��Ϣ\n";
		per[i].getData();
	}
	cout<<"------------------------\n";
	cout<<"�޸���Ϣ\n";
for(int j = 0; j < 3; j++){
		cout<<"�����������Ϣ\n";
		per[j].setData(); 
	}
	cout<<"-----------------------\n";
	for(int k = 0; k < 3; k++){
		cout<<"�����Ա����ϸ��Ϣ\n";
		per[k].getData();
	}
	cout<<"------------------------\n";
	//delete [] per;
	return 0;

}


/*int main(){
	int i = 0;
	cout<<"������Ա��Ϣ������������Ա����\n";
	cin>>i;
	//Person per[i];
	Person *per = new Person[i];
	for(int j = 0; j < i; j++){
		cout<<"�����������Ϣ\n";
		per[j].setData(); 
	}
	cout<<"-----------------------\n";
	for(int k = 0; k < i; k++){
		cout<<"�����Ա����ϸ��Ϣ\n";
		per[k].getData();
	}
	cout<<"------------------------\n";
	delete [] per;
	return 0;
}*/
