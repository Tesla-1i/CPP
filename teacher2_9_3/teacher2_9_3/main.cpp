#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

int main(){

	char *num = 0, *name = 0, *id = 0, sex;
	cout << "�������� ";
	cin >> num;
	cout << "���������� ";
	cin >> name;
	cout << "���������֤�� ";
	cin >> id;
	cout << "�������Ա���m��Ůf��";
	cin >> sex;
	int y, m, d;
	cout << "������������ڣ��� �� �գ�";
	cin >> y >> m >> d;
	Person person1(num, name, id, sex, y, m, d);
	cout << "�����Ա����ϸ��Ϣ \n";
	person1.getData();
	/*int i = 0;
	cout<<"������Ա��Ϣ������������Ա����\n";
	cin>>i;
	Person per[i];
	for(int j = 0; j < i; j++){
	cout<<"��������"

	}
	for(int k = 0; k < i; k++){
	cout<<"�����Ա����ϸ��Ϣ\n";
	per[k].getData();
	}*/
	return 0;
}
