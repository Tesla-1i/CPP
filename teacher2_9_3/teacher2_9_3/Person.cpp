#include <iostream>
#include <cstring>
#include "Person.h"
#include "Date.h"

using namespace std;

Person::~Person(){
	cout << "ִ��Person�Ĺ��캯��\n";
}

Person::Person(char *nr, char *ne, char *id1, char sx, int y, int m, int d) :birthday(y, m, d){
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
	cout << "��� " << number << "\n";
	cout << "���� " << name << "\n";
	cout << "���֤�� " << id << "\n";
	cout << "�Ա� " << sex << "\n";
	cout << "�������� " <<birthday.year << "�� " <<birthday.month << "�� " <<birthday.day << "��\n";
}