
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
void sort(int *iArr){
	int i, j, temp;
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9 - i; j++){
			if(iArr[j] > iArr[j+1]){
				temp = iArr[j];
				iArr[j] = iArr[j+1];
				iArr[j+1] = temp;
			}
		}
	}
}
void sort(char *cArr){
	int i, j;
	char temp;
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7 - i; j++){
			if(cArr[j] > cArr[j+1]){
				temp = cArr[j];
				cArr[j] = cArr[j+1];
				cArr[j+1] = temp;
			}
		}
	}
}
void sort(char *name[]){
	char *p;
	int i,j, k;
	for(i = 0; i < 3; i++){
		for(j =0; j < 3-i; j++){
			k = strcmp(name[j], name[j+1]);
			if(k > 0){
				p = name[j];
				name[j] = name[j+1];
				name[j+1] = p;
			}
		}
	}
}
int main(){
	int iArr[10];
	char cArr[8];
	char *name[] = {"Gates", "Kongzi", "Obama", "Micky"};
	srand((int)time(NULL));

 	for (int i = 0; i < 10; i++) {
   	iArr[i] = (rand() * 100) / RAND_MAX + 1; // 生成1~100之间的随机数

 	}
 	srand((int)time(NULL));
 	for(int i=0;i<8;i++)
 	{
  		cArr[i] = (rand()%2?65+rand()%26:97+rand()%26);//生成随机字母
 	}
 	sort(iArr);
 	sort(cArr);
 	sort(name);
 	for(int i = 0; i < 10; i ++){
 		cout<<iArr[i]<<" ";
 	}
 	cout<<"\n";
 	for(int i = 0; i < 8; i++){
 		cout<<cArr[i]<<" ";
 	}
 	cout<<"\n";
 	for(int i = 0;i < 4; i++){
 		cout<<name[i]<<" ";
 	}
 	return 0;
}
