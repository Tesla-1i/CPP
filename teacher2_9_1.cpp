#include<iostream>
#include<cstring>
using namespace std;

////////////////////////////////////////
class Date
{
public:
	int year, month, day;
public:
	Date(int yr = 2017, int mh = 1, int dy = 1);
	~Date();
};
////////////////////////////////////
Date::Date(int yr, int mh, int dy){
	year = yr;
	month = mh;
	day = dy;
}

Date::~Date(){
	cout << "ִ��Date����������\n";
}
/////////////////////////////////
class Person
{
private:
	char number[10];
	char name[10];
	char id[10];
	Date birthday;
	char sex;
public:
	Person(char *nr, char *ne, char *id, char sx, int y, int m, int d);
	~Person();
	//void setData();
	void getData();
	//Date birthday;
};
//////////////////////////////////
Person::~Person(){
	cout << "ִ��Person����������\n";
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
	cout << "�������� " << birthday.year << "�� " << birthday.month << "�� " << birthday.day << "��\n";
}

////////////////////////////////


int main(){
	char num[10], name[10], id[18], sex;
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