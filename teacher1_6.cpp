#include <iostream>
using namespace std;
//指针，指向指针的指针

void swap4(char * *p, char * *q)
{	char* t = 0;
	t=*p;*p=*q;*q=t;
} 

int main(){
	char str1[] = "Jeason", str2[] = "Gates";
	char *p1 = str1, *p2 = str2;
	swap4(&p1, &p2);
	//p1,p2的指向改变， str1, str2 的内容不变
	cout<<"str1: "<<str1<<" str2: "<<str2<<"\n";
	cout<<"p1: "<<p1<<" p2: "<<p2<<"\n";
	return 0;
}