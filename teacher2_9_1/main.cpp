#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

int main(){
	int i = 0;
	cout<<"输入人员信息，首先输入人员个数\n";
	cin>>i;
	Person per[i];
	for(int j = 0; j < i; j++){
		cout<<"请输入具体信息\n";
		per[j].setData(); 
	}
	for(int k = 0; k < i; k++){
		cout<<"输出人员的详细信息\n";
		per[k].getData();
	}
	return 0;
}
