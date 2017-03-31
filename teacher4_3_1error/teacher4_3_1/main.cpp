#include<iostream>
#include<cstring>
#include"Person.h"
#include"Student.h"

using namespace std;

int main(){
	cout << "请输入学生信息：身份证号，编号，姓名,成绩,班级\n";
	int iP, iS, g;
	char n[20];
	int C[20];
	cin >> iP >> iS >> n >> g;
	//cin >> C;
	Student student1(iP, iS, n, g, C);
	//Student student1( iP, iS, *n, g,  *C);
	student1.show();
	return 0;
}