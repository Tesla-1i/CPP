#include <iostream>
#include <cstring>
#include "mystring.h"
#include "String1.h"
#include "String2.h"

using namespace std;

String2::String2(){
	cout<<"String2构造函数执行\n";
}

String2::~String2(){
	cout<<"String2析构函数执行\n";
}

void String2::replace(char r){
	cout<<"要替换成什么字符\n";
	char c;
	cin>>c;
	int i = 0;
	while(pStr[i] != '\0'){
		if(pStr[i] == r){
			pStr[i] = c;
		}
		i++;
	}
}

bool String2::deleteChar(char d){
	int sum = getLen();
	int j;
	for(j = 0; j < sum; j++){
		if(pStr[j] == d)
			break;
	}
	if(j == sum)
		return false;
	int i = 0, temp;
	while(pStr[i] != '\0'){
		if(pStr[i] == d){
			temp = i;
			while(pStr[i] != '\0'){
				pStr[i] = pStr[i+1];
				i++;
			}
			i = temp + 1;
		}
		else
			i++;
	}
	return true;
}

void String2::insert(char *i){
	cout<<"请输入插入的位置\n";
	int m;
	cin>>m;
	int plength = getLen();
	int ilength = strlen(i);
	int length = getLen() + strlen(i);
	char *pStrTemp = new char[plength + 1];
	pStrTemp = pStr;
	//printf("pStrTemp : %s\n",pStrTemp );
	pStr = new char[length + 1];
	if(m == plength){
		int j = 0;

		while(pStrTemp[j] != '\0'){
			pStr[j] = pStrTemp[j];
			j++;
		}	

		while(i[j-plength] != '\0'){
			pStr[j] = i[j-plength];
			j++;
		}

	
		pStr[length] = '\0';
	}
	else if(m == 1){
		int k = 0;

		while(i[k] != '\0'){
			pStr[k] = i[k];
			k++;
		}

		while(pStrTemp[k - ilength] != '\0'){
			pStr[k] = pStrTemp[k - ilength];
			k++;
		}

		/*while(pStrTemp[j] != '\0'){
			pStr[j] = pStrTemp[j];
			j++;
		}	

		while(i[j-plength] != '\0'){
			pStr[j] = i[j-plength];
			j++;
		}*/
		pStr[length] = '\0';
	}
	else{
		for(int n = 0; n < m- 1; n++){
			pStr[n] = pStrTemp[n];
		}
		int v = n;
		for(int u = 0; u < ilength; u++){
			pStr[n + u] = i[u];
		}
		n += u;
		while(pStrTemp[v] != '\0'){
			pStr[n] = pStrTemp[v];
			n++; v++;
		}
		pStr[length] = '\0';
	}
}

bool String2::find(const char *f){
	int flength = strlen(f);
	int length = getLen();
	int i , j, k;

	for(i = 0, j = 0; i < length; i++){
		if(pStr[i] == f[j]){
			for(k = 0; k < flength; k++){
				if(pStr[i+k] != f[k])
					break;
			}
			if(k == flength)
				return true;
		}
	}
	return false;
}