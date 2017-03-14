#include <iostream>
using namespace std;

void set(int h){
	h++;
	cout<<h;
}

void set(int m){
	m++;
	cout<<m;
}

int main(){
	int h, m;
	cin>>h;
	cin>>m;
	set(h);
	set(m);
	return 0;
}
