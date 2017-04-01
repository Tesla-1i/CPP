#include <iostream>
#include <cstring>
#include "myString.h"
#include "String1.h"
#include "String2.h"

using namespace std;

int main(){
	char mS[20];
	cout<<"请输入字符串\n";
	cin>>mS;
	myString mystring1;
	mystring1.set(mS);
	myString mystring2(mystring1);
	cout<<"---------------------------\n";
	cout<<"下面开始构造String1对象\n";
	cout<<"---------------------------\n";
	char S1[20], S2[20];
	cout<<"请输入字符串\n";
	cin>>S1;
	String1 string11;
	string11.set(S1);
	string11.print();
	int length = string11.getLen();
	cout<<"字符串长度是："<<length<<endl;
	cout<<"请再输入一个字符串\n";
	cin>>S2;
	String1 string12;
	string12.set(S2);
	int flag = string11.compare(string12.getStr());
	switch(flag){
		case 1:
			cout<<"第一个字符串大\n"; break;
		case -1:
			cout<<"第二个字符串大\n"; break;
		case 0:
			cout<<"两个字符串相等\n"; break;
	}
	cout<<"将第二个字符串连接到第一个字符串\n";
	string11.connect(string12.getStr());
	string11.print();
	cout<<"----------------------------\n";
	cout<<"下面开始构造String2对象\n";
	cout<<"----------------------------\n";
	char S3[20];
	cout<<"请输入字符串: \n";
	cin>>S3;
	String2 string21;
	string21.set(S3);
	cout<<"请输入想删除的字符\n";
	char d;
	cin>>d;
	bool dC = string21.deleteChar(d);
	if(dC)
		cout<<"删除成功\n";
	else
		cout<<"没有该字符\n";
	cout<<"请输入想替换的字符\n";
	char r;
	cin>>r;
	string21.replace(r);
	string21.print();
	cout<<"请输入想查找的子串\n";
	char f[10];
	cin>>f;
	bool fS = string21.find(f);
	if(fS)
		cout<<"查找成功\n";
	else
		cout<<"没有该子串\n";
	cout<<"请输入插入的子串\n";
	char i[10];
	cin>>i;
	string21.insert(i);
	string21.print();
	//查找不行
	//插入没写完
	return 0;
}