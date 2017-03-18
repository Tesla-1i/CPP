#include <iostream>
#include <cstring>
#include "2_6_1.h"

using namespace std;

int main(){
	
	//cin>>str;
	 
		//>>方向不要相反
	cout<<"请输入一个字符串\n";
	char str[10];		//有没有更好的方法？
	//scanf("%s",str);
	//printf("%s\n",str );
	
	cin>>str;
	String string1(str);
	String string2(string1);
	return 0;
}