#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

Persion::~Person(){
	cout<<"ִ��Person�Ĺ��캯��\n";
}

Person::Person(char *nr = "0", char *ne = "name", char *id1  = "0", char sx = 'm', int y, int m, int d):birthday(y, m, d){
	strcpy(number, nr);
	strcpy(name, ne);
	strcpy(id, id1);
	sex = sx;
}

/*inline void Person::setData(){
	cout<<"�������� ";
	cin>>number;
	cout<<"���������� ";
	cin>>name;
	cout<<"���������֤�� ";
	cin>>id;
	//cout<<"�������������(�� �� ��)  ";
	//cin>>year>>month>>day;
}*/

inline void Person::getData(){
	cout<<"��� "<<number<<"\n";
	cout<<"���� "<<name<<"\n";
	cout<<"���֤�� "<<id<<"\n";
	cout<<"�Ա� "<<sex<<"\n";
	cout<<"�������� "<<birthday.year<<"�� "<<birthday.month<<"�� "<<birthday.day<<"��\n";
}