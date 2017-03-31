#include <iostream>
#include "String1.h"
#include "myString.h"

using namespace std;

String1::String1():myString(0){
	cout<<"String1构造函数执行\n";
}

String1::~String1(){
	cout<<"String1析构函数执行\n";
}

int String1::getLen(){
	int sum = 0, i =0;
	while(pStr[i] != '\0'){
		//sum += i;
		i++;
	}

	return (i);
}

char *String1::getStr(){
	return pStr;
}

int String1::compare(const char *p){
	//int sum = getLen();
	int i = 0, flag;
	while((pStr[i] != '\0') && (p[i] != '\0')){
		if(pStr[i] > p[i]){
			flag = 1;
			break;
		}
		if(pStr[i] < p[i]){
			flag = -1;
			break;
		}
		else{
			flag = 0;
			i++;
		}
	}
	return flag;
}

void String1::connect(const char* p){
	int pStrLen = getLen();
	int i = 0, sum = 0;
	while(p[i] != '\0'){
		//sum += i;
		i++;
	}
	sum = i ;
	sum += pStrLen;
	///////////////
	//cout<<"sum = "<<sum<<"\n";
	///////////////
	char *pStrTemp = new char[pStrLen+1];
	pStrTemp = pStr;
	///////////////
	
	//cout<<"pStrTemp = "<<pStrTemp<<"\n";
	pStr = new char[sum+1];
	int j = 0;

	while(pStrTemp[j] != '\0'){
		pStr[j] = pStrTemp[j];
		j++;
	}

	while(p[j-pStrLen] != '\0'){
		pStr[j] = p[j-pStrLen];
		j++;
	}

	
	pStr[sum] = '\0';
	//cout<<"新字符串 "<<pStr;
	///////////////
	//printf("新字符串 %s\n",pStr1 );
	/////////////*/
}