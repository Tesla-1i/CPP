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
	cout << "执行Date的析构函数\n";
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
	cout << "执行Person的析构函数\n";
}

Person::Person(char *nr, char *ne, char *id1, char sx, int y, int m, int d) :birthday(y, m, d){
	strcpy(number, nr);
	strcpy(name, ne);
	strcpy(id, id1);
	sex = sx;
}

/*inline void Person::setData(){
cout<<"请输入编号 ";
cin>>number;
cout<<"请输入姓名 ";
cin>>name;
cout<<"请输入身份证号 ";
cin>>id;
//cout<<"请输入出生日期(年 月 日)  ";
//cin>>year>>month>>day;
}*/

inline void Person::getData(){
	cout << "编号 " << number << "\n";
	cout << "姓名 " << name << "\n";
	cout << "身份证号 " << id << "\n";
	cout << "性别 " << sex << "\n";
	cout << "出生日期 " << birthday.year << "年 " << birthday.month << "月 " << birthday.day << "日\n";
}

////////////////////////////////


int main(){
	char num[10], name[10], id[18], sex;
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