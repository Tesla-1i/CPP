#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

int main(){
	int i = 0;
	cout<<"������Ա��Ϣ������������Ա����\n";
	cin>>i;
	Person per[i];
	for(int j = 0; j < i; j++){
		cout<<"�����������Ϣ\n";
		per[j].setData(); 
	}
	for(int k = 0; k < i; k++){
		cout<<"�����Ա����ϸ��Ϣ\n";
		per[k].getData();
	}
	return 0;
}
