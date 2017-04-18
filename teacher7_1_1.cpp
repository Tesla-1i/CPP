//≤Â»Î≈≈–Ú
#include <iostream>
#include <cstring>
using namespace std;

class Box
{
public:
	int side;
	Box(int s = 0){
		side = s;
	}
	~Box(){}
	
};

template <class T>
void sort(T t[], int l){
	int  i, j;
	T key;
	for(i = 1; i < l; i++){
		key = t[i];
		for(j = i - 1; j >= 0; j--){
			if(t[j] > key)
				t[j+1] = t[j];
			else
				break;
		}
		t[j+1] = key;
	}
}

template<> void sort(char * t[], int l){
	int i, j, k;
	char * key; 
	for(i = 1; i < l; i++){
		key = t[i];
		for(j = i - 1; j >= 0; j--){
			k = strcmp(t[j], key);
			if(k > 0)
				t[j+1] = t[j];
			else
				break;
		}
		t[j+1] = key;
	}
}

template<> void sort(Box *t, int l){
	int i, j;
	Box key;
	for(i = 1; i < l; i++){
		key = t[i];
		for(j = i-1; j >= 0; j--){
			if(t[j].side > key.side){
				t[j+1] = t[j];
			}
			else
				break;
		}
		t[j+1] = key;
	}
}

int main(){
	int intArray[5] = {1, 3, 2, 6, 4};
	sort(intArray, 5);
	int i;
	for(i = 0; i < 5; i++){
		cout<<intArray[i]<<" ";
	}
	cout<<"\n";
	///////////////////////////
	char charArra[4] = {'s','a', 'z', 'b'};
	sort(charArra, 4);
	for(i = 0; i < 4; i++){
		cout<<charArra[i]<<" ";
	}
	cout<<"\n";
	/////////////////////
	cout<<"box ≈≈–Ú\n";
	Box boxArray[3] = {4, 1, 3};
	sort(boxArray, 3);
	for(i = 0; i < 3; i++){
		cout<<boxArray[i].side<<" ";
	}
	cout<<"\n";
	/////////////////////
	cout<<"◊÷∑˚¥Æ≈≈–Ú\n";
	char * strArray[3] = {"awse", "qwsed", "cdews"};
	sort(strArray, 3);
	for(i = 0; i < 3; i++){
		cout<<strArray[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

