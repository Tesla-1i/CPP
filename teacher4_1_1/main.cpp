#include <iostream>
#include <cstring>
#include "myString.h"
#include "String1.h"
#include "String2.h"

using namespace std;

int main(){
	char mS[20];
	cout<<"�������ַ���\n";
	cin>>mS;
	myString mystring1;
	mystring1.set(mS);
	myString mystring2(mystring1);
	cout<<"---------------------------\n";
	cout<<"���濪ʼ����String1����\n";
	cout<<"---------------------------\n";
	char S1[20], S2[20];
	cout<<"�������ַ���\n";
	cin>>S1;
	String1 string11;
	string11.set(S1);
	string11.print();
	int length = string11.getLen();
	cout<<"�ַ��������ǣ�"<<length<<endl;
	cout<<"��������һ���ַ���\n";
	cin>>S2;
	String1 string12;
	string12.set(S2);
	int flag = string11.compare(string12.getStr());
	switch(flag){
		case 1:
			cout<<"��һ���ַ�����\n"; break;
		case -1:
			cout<<"�ڶ����ַ�����\n"; break;
		case 0:
			cout<<"�����ַ������\n"; break;
	}
	cout<<"���ڶ����ַ������ӵ���һ���ַ���\n";
	string11.connect(string12.getStr());
	string11.print();
	cout<<"----------------------------\n";
	cout<<"���濪ʼ����String2����\n";
	cout<<"----------------------------\n";
	char S3[20];
	cout<<"�������ַ���: \n";
	cin>>S3;
	String2 string21;
	string21.set(S3);
	cout<<"��������ɾ�����ַ�\n";
	char d;
	cin>>d;
	bool dC = string21.deleteChar(d);
	if(dC)
		cout<<"ɾ���ɹ�\n";
	else
		cout<<"û�и��ַ�\n";
	cout<<"���������滻���ַ�\n";
	char r;
	cin>>r;
	string21.replace(r);
	string21.print();
	cout<<"����������ҵ��Ӵ�\n";
	char f[10];
	cin>>f;
	bool fS = string21.find(f);
	if(fS)
		cout<<"���ҳɹ�\n";
	else
		cout<<"û�и��Ӵ�\n";
	cout<<"�����������Ӵ�\n";
	char i[10];
	cin>>i;
	string21.insert(i);
	string21.print();
	//���Ҳ���
	//����ûд��
	return 0;
}